#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QObject>
#include <QGraphicsView>
#include <QImage>
#include <QTimer>
#include <QBrush>

#include "player.h"
#include "score.h"
#include "health.h"
#include "enemy.h"

class Game : public QGraphicsView
{
public:

    Game(QWidget *parent = 0);

    QGraphicsScene *scene;

    Player *m_player;
    Score *score;
    Health *hp;
    Enemy *enemy;


};

#endif // GAME_H
