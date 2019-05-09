#include "saida.h"
#include <QGraphicsScene>
Saida::Saida()
{
    QPixmap escada_png(QPixmap(":/png/imagens/escada.png"));
    setRect(82,82,35,35);                   // CRIA ESCADA
    setBrush(QBrush(escada_png));

}
