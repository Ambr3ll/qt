#include "score.h"

Score::Score(QGraphicsItem *parent)
    : QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Wynik :: ") + QString::number(score));
    setDefaultTextColor(Qt::green);
}

int Score::getScore() { return score; }

void Score::increase()
{
    score++;
    setPlainText(QString("Wynik :: ") + QString::number(score));
}

