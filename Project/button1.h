#ifndef BUTTON1_H
#define BUTTON1_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

class Button1:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    Button1(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // BUTTON1_H
