#include "player.h"

Player::Player(QGraphicsItem *parent)
    :  QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/textures/res/textures/player.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
            setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
            setPos(x()+10,y());
    }
    // shoot with the spacebar
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x() + 60, y());
        scene()->addItem(bullet);
    }
}

void Player::spawn()
{
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}
