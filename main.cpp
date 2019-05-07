
#include "print_jogo.h"
#include <QCoreApplication>
#include <iostream>
#include <QApplication>
#include <QKeyEvent>
#include <QDebug>

using namespace std;


void keyPressEvent(int matriz[][13]){
    QKeyEvent *event;

    for(int i;i<13;i++){
        for(int j;j<13;j++){

            if(matriz[i][j]==2){
                if (event->key() == Qt::Key_Left){
                    qDebug() <<"tecla";
                    matriz[i-1][j] = 2;
                    matriz[i][j] = 0;
                }
                else if (event->key() == Qt::Key_Right){
                    matriz[i+1][j] = 2;
                    matriz[i][j] = 0;
                }
                else if (event->key() == Qt::Key_Up){
                    matriz[i][j-1] = 2;
                    matriz[i][j] = 0;
                }
                else if (event->key() == Qt::Key_Down){
                    matriz[i][j+1] = 2;
                    matriz[i][j] = 0;
                }
            }else{}
        }
    }

}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int matriz[13][13];             // 0 = espaço branco, 1 == parede
    paredes_mapa(matriz);
    matriz[10][11]=2;               //personagem

    QGraphicsScene * Tela_game = new QGraphicsScene;
    QGraphicsView view(Tela_game);

    QPixmap ricardo_png(QPixmap("C:\\Users\\allan\\OneDrive\\Área de Trabalho\\OscarEOsAlho-master\\ricardo.png"));
    QPixmap parede_png(QPixmap("C:\\Users\\allan\\OneDrive\\Área de Trabalho\\OscarEOsAlho-master\\parede.png"));
    QPixmap chao_png(QPixmap("C:\\Users\\allan\\OneDrive\\Área de Trabalho\\OscarEOsAlho-master\\chao.png"));

    for(int i = 0;i<13;i++){
        for(int j = 0; j<13;j++){
            switch(matriz[i][j]){
            case 0: //espaço em branco
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(chao_png));
                break;
            case 1: //parede
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(parede_png));
                break;
            case 2: //personagem
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(ricardo_png));
                break;
            }
        }
    }
    qDebug() <<"alo";
    view.setFixedSize(800,600);
    view.show();
    return a.exec();

}


