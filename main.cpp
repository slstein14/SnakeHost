#include <QApplication>
#include "hostgame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    HostGame* host;
    host=NULL;
    if(host==NULL){
        host = new HostGame();
    }

    return a.exec();
}
