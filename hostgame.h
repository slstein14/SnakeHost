#ifndef HOSTGAME_H
#define HOSTGAME_H
#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include "renderobject.h"
#include <QTimer>
#include <QKeyEvent>
#include <QLabel>
#include <vector>
#include <time.h>
using namespace std;

class HostGame : public QWidget
{
    Q_OBJECT

public:
    explicit HostGame(QWidget *parent = 0);
    ~HostGame();

    QString hostIP;
    void setHostIP(QString address);
    QTcpServer *server;
    QList<QTcpSocket*>socket;

    QTimer *timer;
    RenderObject* wall;
    RenderObject* apple;
    vector<RenderObject*>walls;
    vector<vector<RenderObject*>>snakes;
    int matrix[48][64];
    int difficulty;
    bool gameStarted;
    bool appleEaten;

    vector<QString> playerName;
    vector<bool> connected;
    vector<bool> ready;
    vector<bool> newDirection;
    vector<bool> playerlost;
    vector<int> direction;
    vector<int> score;
    int connectedPlayers;

private slots:
    void newConnection();
    void updateField();
    void Disconnected();
    void readyRead();

private:
    void moveSnake();
    void moveApple();
    void resetVars();
    void startGame();
    void initSnake();

};

#endif // HOSTGAME_H
