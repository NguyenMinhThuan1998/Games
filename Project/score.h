#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    void increase1();
    void increase2();
    void increase3();
    void increase4();
    void increase5();
    void hide();
};
#endif // SCORE_H
