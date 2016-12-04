#include "health.h"
#include <QDebug>
#include <QFont>

Health::Health(QGraphicsItem *parent)
    : QGraphicsTextItem(parent)
{
    health = 5;
    setPlainText(QString("HP :: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
//    setFont(QFont("Ubuntu", 36));
}

void Health::hp_decrease()
{
    health--;
    setPlainText(QString("HP :: ") + QString::number(health));

}

int Health::getHp() { return health; }

