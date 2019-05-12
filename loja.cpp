#include "loja.h"
#include <QGraphicsScene>

Loja::Loja()
{
    QPixmap loja_png(QPixmap(":/png/imagens/loja.png"));
    setRect(165,165,190,190);
    setBrush(QBrush(loja_png));
}
