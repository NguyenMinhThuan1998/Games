#ifndef WORD2_H
#define WORD2_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Word2:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    Word2(QString name, QGraphicsItem* parent=0);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
    void clicked();

private:
    QGraphicsTextItem* text;
};
#endif // WORD2_H
