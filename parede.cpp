#include "parede.h"
#include <QGraphicsScene>
#include <QDebug>
Parede::Parede(int i, int j)
{
    QPixmap parede_png(QPixmap(":/png/imagens/parede.png"));
    setRect(i*40+1,j*40+1,38,38);
    setBrush(QBrush(parede_png));
}
