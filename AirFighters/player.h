#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QObject>

#include "bullet.h"
#include "enemy.h"

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:

    Player(QGraphicsItem *parent=0);

    void keyPressEvent(QKeyEvent *event);

public slots:
    void spawn();

};

#endif // PLAYER_H
