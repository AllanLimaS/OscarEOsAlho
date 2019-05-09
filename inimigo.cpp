#include "inimigo.h"
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <windows.h>

#include <qDebug>

Inimigo::Inimigo(){

    QPixmap bolsonaro_png(QPixmap(":/png/imagens/bolsonaro.png"));
    int posa = 0, posb = 0;
    posa = rand()%8 * 40;
    posb = rand()%8 * 40;
    if(posa == 0 ){
        posa = 40;
    }
    if(posb == 0 ){
        posb = 40;
    }
    setRect(posa + 1,posb + 1,38,38);              // CRIA BOLSONARO
    setBrush(QBrush(bolsonaro_png));
    qDebug()<<x()<<endl<<y();
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

void Inimigo::move(){

    int doideira = rand()%4;   //aumenta esse numero pra diminuir a doidera

    int a =0, b=0;

    switch(doideira){
        case 00:
        if( x() != 40){
            a = 40;
            b = 0;
        }
        break;

        case 01:        //esquerda
        if( x() != -360){
            a = -40;
            b = 0;
        }
        break;

        case 02:        //baixo
        if( y() !=40){
            a =0;
            b = 40;
        }
        break;

        case 03:
        if( y() != -360){
            a = 0;
            b = -40;
        }
        break;
    }
    setPos(x() + a, y () + b);

    qDebug()<<x()<<endl<<y();
}


