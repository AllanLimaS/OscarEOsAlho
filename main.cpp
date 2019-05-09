#include "print_jogo.h"
#include "player.h"
#include "saida.h"
#include "parede.h"
#include <QCoreApplication>
#include <iostream>
#include <QApplication>
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsRectItem>
#include <QDir>
#include <windows.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int matriz[13][13];             // 0 = espaço branco, 1 == parede
    paredes_mapa(matriz);

    QApplication a(argc, argv);

    QGraphicsScene * Tela_game = new QGraphicsScene;
    Player * jogador = new Player();
    Saida * escada = new Saida();


    for(int i = 0; i<13; i++){
        for(int j = 0; j<13; j++){
            if(i==0||j==0||i==12||j==12){
                Parede * parede = new Parede(i, j);
                Tela_game -> addItem(parede);
            }
        }
    }

    QGraphicsView view(Tela_game);
    Tela_game -> addItem(jogador);
    Tela_game -> addItem(escada);

    QPixmap ricardo_png(QPixmap(":/png/imagens/ricardo.png"));
    QPixmap chao_png(QPixmap(":/png/imagens/chao.png"));

    qDebug()<<" "<<QDir::currentPath();

    jogador->setRect(400,400,40,40);
    jogador->setBrush(QBrush(ricardo_png));       // CRIA O PUTO

    for(int i = 0;i<13;i++){
        for(int j = 0; j<13;j++){

            if (matriz[i][j]==0){
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(chao_png));
            }

        }
    }

    jogador->initPlayer();
    jogador->setFlag(QGraphicsItem::ItemIsFocusable); // MANTEM FOCO NO BALLOTIN
    jogador->setFocus();
    jogador->atualizaPontos();

    view.setFixedSize(800,600);
    view.show();
    return a.exec();

}


