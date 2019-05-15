#include "tela_piso.h"
#include <QFont>

Tela_piso::Tela_piso(QGraphicsTextItem * parent): QGraphicsTextItem (parent)
{
    setPlainText(QString("PISO : ") + QString::number(this->piso));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Comic",14));
    setPos(0,517);

}

void Tela_piso::setPiso(int value)
{
    piso = value;
    setPlainText(QString("PISO : ") + QString::number(this->piso));
    if(piso == 5 or piso == 10){
        setPlainText(QString("PISO : ") + QString::number(this->piso) + QString("    LOJA: Aperte backspace"));
    }
    if(piso == 2 or piso == 4 or piso == 9){
        setPlainText(QString("PISO : ") + QString::number(this->piso) + QString("    BAU"));
    }
    if(piso == 11){
        setPlainText(QString("PISO : ") + QString::number(this->piso) + QString("    Boss God"));
    }
}
