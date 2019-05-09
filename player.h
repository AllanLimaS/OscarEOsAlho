#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include "entidade.h"
#include "menu.h"


class Player: public QGraphicsRectItem, public Entidade
{
private:
    int pontoUpgrade, nivel;
    int capacete, espada, peitoral, potion;
    Menu mainMenu;

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
    void initPlayer();
    void atualizaPontos();
    void atualizaPlayer();
};

#endif // PLAYER_H
