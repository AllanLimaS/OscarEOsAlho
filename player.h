#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include "entidade.h"

class Player: public QGraphicsRectItem, public Entidade
{
private:
    int pontoUpgrade, nivel;
    int capacete, espada, peitoral, potion;


public:
    void keyPressEvent(QKeyEvent * event);
    int getPontoUpgrade() const;
    void setPontoUpgrade(int value);
    int getNivel() const;
    void setNivel(int value);
    int getCapacete() const;
    void setCapacete(int value);
    int getEspada() const;
    void setEspada(int value);
    int getPeitoral() const;
    void setPeitoral(int value);
    int getPotion() const;
    void setPotion(int value);
    void criainimigo();
};

#endif // PLAYER_H
