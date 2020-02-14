#ifndef NUMBER2_H
#define NUMBER2_H
#include <QGraphicsTextItem>

class Number2: public QGraphicsTextItem{
public:
    Number2(QGraphicsItem * parent=0);
    void increase();
    int getNumber2();
private:
    int number2;
};
#endif // NUMBER2_H
