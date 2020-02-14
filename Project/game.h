#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "Score.h"
#include "Nobita.h"
#include "Lobster.h"
#include "Number.h"
#include "Bowl.h"
#include "Number1.h"
#include "Number2.h"
#include "Thor.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
class Game: public QGraphicsView{
       Q_OBJECT
public:
    // constructors
    Game(QWidget* parent=0);

    // public methods
    void displayMainMenu();


    // public attributes
    QGraphicsScene* scene;
    Score*score;
    Nobita*nobita;
    Lobster*lobster;
    Number*number;
    Bowl*bowl;
    Number1*number1;
    Thor*thor;
    Number2*number2;








public slots:
    void f();
    void f1();
    void back ();
    void read1();
    void read2();
    void read3();
    void read4();
    void read5();
    void read6();
    void read7();
    void read8();
    void read9();
    void read10();
    void read11();
    void read12();
    void read13();
    void read14();
    void read15();
    void read16();
    void read17();
    void read18();

    void fo();
    void fa();
    void fa1();
    void fo1();
    void web();
    void changefa1();

private:
       QMediaPlayer*music;
       QMediaPlaylist *playlist;




};

#endif // GAME_H
