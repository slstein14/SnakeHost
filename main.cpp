#include <QApplication>
#include "hostgame.h"

int main(int argc, char *argv[])
{//Starts the server on startup
    QApplication a(argc, argv);

    HostGame* host;
    host=NULL;
    if(host==NULL){
        host = new HostGame();
    }

    return a.exec();
}
