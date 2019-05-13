#ifndef CHEFES_H
#define CHEFES_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include "entidade.h"
#include "player.h"

class Chefes : public QObject, public QGraphicsRectItem, public Entidade
{
    Q_OBJECT
public:
    Chefes();
public slots:
    void move();
};

#endif // CHEFES_H
