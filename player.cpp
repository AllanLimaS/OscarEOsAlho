#include "player.h"
#include "saida.h"
#include "inimigo.h"
#include <QKeyEvent>
#include <QList>
#include <QDebug>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <windows.h>

int Player::getPontoUpgrade() const
{
    return pontoUpgrade;
}

void Player::setPontoUpgrade(int value)
{
    pontoUpgrade = value;
}

int Player::getNivel() const
{
    return nivel;
}

void Player::setNivel(int value)
{
    nivel = value;
}

int Player::getCapacete() const
{
    return capacete;
}

void Player::setCapacete(int value)
{
    capacete = value;
}

int Player::getEspada() const
{
    return espada;
}

void Player::setEspada(int value)
{
    espada = value;
}

int Player::getPeitoral() const
{
    return peitoral;
}

void Player::setPeitoral(int value)
{
    peitoral = value;
}

int Player::getPotion() const
{
    return potion;
}

void Player::setPotion(int value)
{
    potion = value;
}
    int inimigos_mapa = -1; // SLA FUNCIONA

void Player::criainimigo(){ // TENTAR COLOCAR EM INIMIGO

        Inimigo * bolsonaro = new Inimigo();
        scene()->addItem(bolsonaro);

}


void Player::keyPressEvent(QKeyEvent *event){

    if(inimigos_mapa == -1){
        criainimigo();
        inimigos_mapa = 1;
    }

    if (event->key() == Qt::Key_Left){
        if(x() == -360){
            setPos(x(),y());
            }else{
                setPos(x()-40,y());
            }
        }

        else if (event->key() == Qt::Key_Right){
            if(x() == 40){
                setPos(x(),y());
            }else{
                setPos(x()+40,y());
            }
        }

        else if (event->key() == Qt::Key_Up){
            if(y() == -360){
                setPos(x(),y());
            }else{
                setPos(x(),y()-40);
            }
        }

        else if (event->key() == Qt::Key_Down){
            if(y() == 40){
                setPos(x(),y());
            }else{
                setPos(x(),y()+40);
            }
        }

        QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int  i = 0, n = colliding_items.size(); i < n; i++){
            if(typeid(*(colliding_items[i]))== typeid (Saida)){
                if(inimigos_mapa == 0){
                    setPos(0, 0);
                    criainimigo();
                    inimigos_mapa = inimigos_mapa + 1;
                }
            };

           if(typeid(*(colliding_items[i]))== typeid (Inimigo)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;

            };

        }

}



