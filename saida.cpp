#include "saida.h"
#include <QGraphicsScene>

Saida::Saida()
{
    QPixmap escada_png(QPixmap("C:\\Users\\Gustavo Mafra\\Desktop\\OscarEOsAlho-seco_v1\\escada.png"));
    setRect(82,82,35,35);                   // CRIA ESCADA
    setBrush(QBrush(escada_png));

}
