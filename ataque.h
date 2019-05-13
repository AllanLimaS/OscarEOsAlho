#ifndef ATAQUE_H
#define ATAQUE_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>

#include "player.h"


class Ataque : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Ataque();

public slots:
    void deleta();
};

#endif // ATAQUE_H
