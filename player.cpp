#include "player.h"
#include "saida.h"
#include <QKeyEvent>
#include <QList>

    void Player::keyPressEvent(QKeyEvent *event){
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
                setPos(0, 0);
            };
        }

  }



