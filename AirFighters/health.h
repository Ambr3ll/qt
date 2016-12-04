#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>

class Health : public QGraphicsTextItem
{
public:
    Health(QGraphicsItem *parent = 0);

    void hp_decrease();
    int getHp();

private:
    int health;
};

#endif // HEALTH_H
