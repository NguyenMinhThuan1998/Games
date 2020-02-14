#ifndef NOBITA_H
#define NOBITA_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Nobita: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Nobita(QGraphicsItem * parent=0);
    void change();

};
#endif // NOBITA_H
