#ifndef BOWL_H
#define BOWL_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Bowl: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bowl(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent*event);
    void change ();




};
#endif // BOWL_H
