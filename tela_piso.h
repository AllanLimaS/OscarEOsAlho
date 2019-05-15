#ifndef TELA_PISO_H
#define TELA_PISO_H
#include "QGraphicsTextItem"


class Tela_piso: public QGraphicsTextItem
{
private:
    int piso;
public:
    Tela_piso(QGraphicsTextItem * parent = 0);
    void setPiso(int value);
};

#endif // TELA_PISO_H
