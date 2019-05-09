#include "bau.h"
#include <QGraphicsScene>

Bau::Bau()
{
    QPixmap alho_png(QPixmap(":/png/imagens/alho.png"));
    setRect(240,240,38,38);
    setBrush(QBrush(alho_png));
}
