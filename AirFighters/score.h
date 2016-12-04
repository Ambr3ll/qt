#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QFont>

class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *parent = 0);

    int getScore();
    void increase();

private:
    int score;

};

#endif // SCORE_H
