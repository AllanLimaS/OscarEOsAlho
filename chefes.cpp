#include "chefes.h"
#include "parede.h"
#include <QList>
#include <QGraphicsScene>
#include <windows.h>

Chefes::Chefes()
{

    QPixmap boss_png(QPixmap(":/png/imagens/boss.png"));


    setRect(0, 0, 160, 160);
    setBrush(QBrush(boss_png));
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(150);
}

void Chefes::move(){
    int doideira = rand()%4;

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




