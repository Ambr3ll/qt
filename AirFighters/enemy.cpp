#include "enemy.h"
#include "game.h"

extern Game *game;

Enemy::Enemy(QGraphicsItem *parent)
    : QObject(), QGraphicsPixmapItem(parent)
{
    int r_pos = rand() % 600;
    setPos(r_pos, 0);

    setPixmap(QPixmap(":/textures/res/textures/enemy.png"));
    setTransformOriginPoint(50, 50);
    setRotation(0);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(move()));

    timer->start(50);

}

void Enemy::move()
{
    setPos(x(), y() + 5);

    if (pos().y() > 640)
    {
        game->hp->hp_decrease();
        scene()->removeItem(this);
        delete this;
    }
}


