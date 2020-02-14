#ifndef WORD1_H
#define WORD1_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Word1:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    Word1(QString name, QGraphicsItem* parent=0);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
    void clicked();

private:
    QGraphicsTextItem* text;
};

#endif // WORD1_H
