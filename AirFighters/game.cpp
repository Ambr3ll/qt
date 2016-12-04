#include "game.h"

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 640);

    setBackgroundBrush(QBrush(QImage(":/textures/res/textures/background.png")));

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,640);

    setScene(scene);

    m_player = new Player();
    m_player->setPos(400, 500);
    m_player->setFlag(QGraphicsItem::ItemIsFocusable);
    m_player->setFocus();

    scene->addItem(m_player);

    score = new Score();
    scene->addItem(score);

    hp = new Health();
    hp->setPos(hp->x(), hp->y() + 25);
    scene->addItem(hp);

    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()),
                     m_player, SLOT(spawn()));

    timer->start(1500);

    show();
}

