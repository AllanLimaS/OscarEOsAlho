#include "print_jogo.h"
#include "player.h"
#include "saida.h"
#include <QCoreApplication>
#include <iostream>
#include <QApplication>
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsRectItem>
#include <QDir>



using namespace std;


int main(int argc, char *argv[])
{
    int matriz[13][13];             // 0 = espaço branco, 1 == parede
    paredes_mapa(matriz);
    int i = 0, j=0;

    QApplication a(argc, argv);


    QGraphicsScene * Tela_game = new QGraphicsScene;
    Player * jogador = new Player();
    Saida * escada = new Saida();
    QGraphicsView view(Tela_game);

    Tela_game -> addItem(jogador);
    Tela_game -> addItem(escada);

    QPixmap ricardo_png(QPixmap("C:\\Users\\6462340\\Desktop\\OscarEOsAlho-seco_v1\\ricardo.png"));
    QPixmap parede_png(QPixmap("C:\\Users\\6462340\\Desktop\\OscarEOsAlho-seco_v1\\parede.png"));  // ARRUMA ARROMBAF
    QPixmap chao_png(QPixmap("C:\\Users\\6462340\\Desktop\\OscarEOsAlho-seco_v1\\chao.png"));
    QPixmap escada_png(QPixmap("C:\\Users\\6462340\\Desktop\\OscarEOsAlho-seco_v1\\escada.png"));

    qDebug()<<" "<<QDir::currentPath();

    jogador->setRect(400,400,40,40);
    jogador->setBrush(QBrush(ricardo_png));       // CRIA O PUTO
    escada->setRect(82,82,35,35);
    escada->setBrush(QBrush(escada_png));        // CRIA ESCADA


    for(int i = 0;i<13;i++){
        for(int j = 0; j<13;j++){
            switch(matriz[i][j]){
            case 0: //espaço em branco
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(chao_png));
                break;
            case 1: //parede
                Tela_game->addRect(QRect(QPoint(i*40,j*40),QSize(40,40)),QPen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin),QBrush(parede_png));
                break;
            }
        }
    }

    jogador->initPlayer();
    jogador->setFlag(QGraphicsItem::ItemIsFocusable); // MANTEM FOCO NO BALLOTIN
    jogador->setFocus();

    view.setFixedSize(800,600);
    view.show();
    return a.exec();

}


