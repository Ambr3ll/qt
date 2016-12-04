#include "bullet.h"
#include "game.h"
#include <typeinfo>

extern Game *game;

Bullet::Bullet(QGraphicsItem *parent)
    : QObject(), QGraphicsPixmapItem(parent)
{

    setPixmap(QPixmap(":/textures/res/textures/Bullet.png"));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(shot()));

    timer->start(50);
}

void Bullet::shot()
{
    setPos(x(), y() - 10);

    QList<QGraphicsItem *> colliding_items = collidingItems();

    for (int i=0, n = colliding_items.size(); i < n; ++i)
    {
        if (typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            game->score->increase();

            // remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this;
            return;
        }
    }

    if (pos().y() < 0)
    {
        scene()->removeItem(this);
        delete this;
    }

}





