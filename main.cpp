#include "print_jogo.h"
#include <QCoreApplication>
#include <iostream>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int matriz [13][13]={};

    QGraphicsScene * Tela_game = new QGraphicsScene;

    QGraphicsView view(Tela_game);

    for(int i = 0;i<13;i++){
        for(int j = 0; j<13;j++){
            switch(matriz[i][j]){
            case 0:
                //Tela_game->addLine(1,i,500,i,QPen(Qt::black, 100, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
                Tela_game->addLine(i*50,j*50,i*50+50,j*50+50,QPen(Qt::black, 100, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
                break;
            case 1:
                break;
            }

        }
    }

    view.setFixedSize(800,600);
    view.show();

    return a.exec();
}
