#ifndef NUMBER1_H
#define NUMBER1_H
#include <QGraphicsTextItem>

class Number1: public QGraphicsTextItem{
public:
    Number1(QGraphicsItem * parent=0);
    void increase();
    int getNumber1();
private:
    int number1;
};
#endif // NUMBER1_H
