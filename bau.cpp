#include "bau.h"
#include <QGraphicsScene>

Bau::Bau()
{
    QPixmap alho_png(QPixmap(":/png/imagens/alho.png"));
    setRect(240,240,40,40);
    setBrush(QBrush(alho_png));
}
