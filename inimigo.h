#ifndef INIMIGO_H
#define INIMIGO_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>


#include "entidade.h"
#include "player.h"

class Inimigo: public QObject, public QGraphicsRectItem, public Entidade{
    Q_OBJECT
public:
    Inimigo();
public slots:
    void move();


};

#endif // INIMIGO_H
