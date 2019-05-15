#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include <QObject>
#include "entidade.h"
#include "menu.h"
#include "tela_piso.h"

class Player: public QObject, public QGraphicsRectItem, public Entidade{
        Q_OBJECT

private:
    QGraphicsRectItem maxLifeBar;
    QGraphicsRectItem lifeBar;
    int pontoUpgrade, nivel;
    int capacete, espada, peitoral, potion;
    Menu mainMenu;
    Tela_piso * telaPiso = new Tela_piso();

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
    void criainimigo();
public slots:
    void Volta();
};

#endif // PLAYER_H
