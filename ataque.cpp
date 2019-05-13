#include "ataque.h"
#include "inimigo.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QDebug>

Ataque::Ataque()
{
     QPixmap alho_png(QPixmap(":/png/imagens/alho.png"));
    setRect(360,360,40,40);
    setBrush(QBrush(alho_png));

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(deleta()));

    timer->start(200);

}

void Ataque::deleta(){

    QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int  i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i]))== typeid (Inimigo)){

             Player player;
             int quant = player.getInimigos();
             qDebug()<<player.getInimigos();
             quant = quant - 2;
             player.setInimigos(quant);
             scene()->removeItem(colliding_items[i]);
             qDebug()<<player.getInimigos();
             delete colliding_items[i];
             // AKI USA OS SET DE VEZ DELET PARA MUDAR A VIDA
        }
    }

    scene()->removeItem(this);
    delete (this);
}
