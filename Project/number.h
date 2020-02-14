#ifndef NUMBER_H
#define NUMBER_H
#include <QGraphicsTextItem>

class Number: public QGraphicsTextItem{
public:
    Number(QGraphicsItem * parent=0);
    void increase();
    int getNumber();
private:
    int number;
};

#endif // NUMBER_H
