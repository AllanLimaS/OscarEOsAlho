#include "inimigo.h"
#include "parede.h"
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QList>
#include <windows.h>


#include <qDebug>

Inimigo::Inimigo(){

    if(rand()%2 == 1){
        setBrush(QPixmap(":/png/imagens/chuchu1.png"));
    }else{
        setBrush(QPixmap(":/png/imagens/chuchu2.png"));
    }

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
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(200);
}

void Inimigo::move(){

    int doideira = rand()%4;   //aumenta esse numero pra diminuir a doidera

    int a =0, b=0;

    switch(doideira){
        case 00:
            a = 40;
            b = 0;
        break;

        case 01:        //esquerda
            a = -40;
            b = 0;
        break;

        case 02:        //baixo
            a =0;
            b = 40;
        break;

        case 03:
            a = 0;
            b = -40;
        break;
    }
    setPos(x() + a, y () + b);
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int  i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i]))== typeid (Parede)){
            setPos(x() - a, y () - b);
         }
    }
}



