#ifndef DORAEMON_H
#define DORAEMON_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Doraemon: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Doraemon(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent*event);
public slots:
    void move();




};
#endif // DORAEMON_H
