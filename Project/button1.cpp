#include "Button1.h"
#include <QGraphicsTextItem>
#include <QBrush>
#include <QMediaPlayer>


Button1::Button1(QString name, QGraphicsItem *parent): QGraphicsRectItem(parent){
    // draw the rect
    setRect(0,0,200,50);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);

    text = new QGraphicsTextItem(name,this);
    int xPos = rect().width()/2 - text->boundingRect().width()/2;
    int yPos = rect().height()/2 - text->boundingRect().height()/2;
    text->setPos(xPos,yPos);



    // allow responding to hover events
    setAcceptHoverEvents(true);
}

void Button1::mousePressEvent(QGraphicsSceneMouseEvent *event){
    emit clicked();

}

void Button1::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //change color to cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);
    /*QMediaPlayer * music = new QMediaPlayer();
       music->setMedia(QUrl("qrc:/sounds/D:/Project/Voice 001_sd.m4a"));
       music->play();*/



}

void Button1::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    // change color to dark cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::yellow);

    setBrush(brush);

}
