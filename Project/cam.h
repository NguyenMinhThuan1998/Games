#ifndef CAM_H
#define CAM_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Cam: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Cam(QGraphicsItem * parent=0);
public slots:
    void move();
#endif // CAM_H
