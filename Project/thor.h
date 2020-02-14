#ifndef THOR_H
#define THOR_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>

class Thor: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Thor(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent*event);




};
#endif // THOR_H
