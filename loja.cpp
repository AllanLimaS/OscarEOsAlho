#include "loja.h"
#include <QGraphicsScene>

Loja::Loja()
{
    QPixmap loja_png(QPixmap(":/png/imagens/loja.png"));
    setRect(160,160,160,160);
    setBrush(QBrush(loja_png));
}
