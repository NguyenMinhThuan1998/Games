#include "Game.h"
#include "Button.h"
#include <QGraphicsTextItem>
#include "Word1.h"
#include "Bananas.h"
#include "Apple.h"
#include "Bowl.h"
#include <QMediaPlayer>
#include "Avocado.h"
#include "Grape.h"
#include "Orange.h"
#include "Pineapple.h"
#include <QBrush>
#include "Thor.h"
#include "Son.h"
#include "Niece.h"
#include "Uncle.h"
#include "Aunt.h"
#include "Husband.h"
#include "Wife.h"
#include "Jaian.h"
#include "Doraemon.h"
#include "Pork.h"
#include "Porktext.h"
#include "Beef.h"
#include "Beeftext.h"
#include "Lamb.h"
#include "Lambtext.h"
#include "Lobster.h"
#include "Lobstertext.h"
#include "Oyster.h"
#include "Oystertext.h"
#include "Nobita.h"
#include <QUrl>
#include <QDesktopServices>
#include <QListWidget>






Game::Game(QWidget *parent){
    // set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    // set up the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1024,768);
    setScene(scene);
}
void Game::back(){
     scene->clear();
     displayMainMenu();
     music->stop();


}
void Game::read2(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Banana.m4a"));
           music->play();
}
void Game::read1(){
            music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Apple.m4a"));
           music->play();
}
void Game::read3(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Strawberry.m4a"));
           music->play();
}
void Game::read4(){
            music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Pineapple.m4a"));
           music->play();
}
void Game::read5(){
            music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Avocado.m4a"));
           music->play();
}
void Game::read6(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Orange.m4a"));
           music->play();
}
void Game::read7(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Grape.m4a"));
           music->play();
}
void Game::read8(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Wife.m4a"));
           music->play();
}
void Game::read9(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Husband.m4a"));
           music->play();
}
void Game::read10(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Uncle.m4a"));
           music->play();
}
void Game::read11(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Aunt.m4a"));
           music->play();
}
void Game::read12(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Son.m4a"));
           music->play();
}
void Game::read13(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Niece.m4a"));
           music->play();
}
void Game::read14(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Beef.m4a"));
           music->play();
}
void Game::read15(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Pork.m4a"));
           music->play();
}
void Game::read16(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Lamb.m4a"));
           music->play();
}
void Game::read17(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Oyster.m4a"));
           music->play();
}
void Game::read18(){
           music = new QMediaPlayer();
           music->setMedia(QUrl("qrc:/sounds/Lobster.m4a"));
           music->play();
}
void Game::f(){
 scene->clear();
 setBackgroundBrush(QBrush(QImage(":/Images/fruit.jpg").scaled(1024,768)));
 Word1* w1 = new Word1(QString("Apple= trái táo"));
 int w1x = this->width()/2 - w1->boundingRect().width()/2;
 int w1y = 100;
 w1->setPos(w1x,w1y);
 connect(w1,SIGNAL(clicked()),this,SLOT(read1()));
 scene->addItem(w1);

 Word1* w2 = new Word1(QString("Bananas= trái chuối"));
 int w2x = this->width()/2 - w1->boundingRect().width()/2;
 int w2y = 175;
 connect(w2,SIGNAL(clicked()),this,SLOT(read2()));
 w2->setPos(w2x,w2y);

 scene->addItem(w2);

 Word1* w3 = new Word1(QString("Strawberry= trái dâu"));
 int w3x = this->width()/2 - w1->boundingRect().width()/2;
 int w3y = 250;
 w3->setPos(w3x,w3y);
 connect(w3,SIGNAL(clicked()),this,SLOT(read3()));
 scene->addItem(w3);

 Word1* w4 = new Word1(QString("Pineapple= trái khớm (thơm)"));
 int w4x = this->width()/2 - w1->boundingRect().width()/2;
 int w4y = 325;
 w4->setPos(w4x,w4y);
 connect(w4,SIGNAL(clicked()),this,SLOT(read4()));
 scene->addItem(w4);

 Word1* w5 = new Word1(QString("Avocado=trái bơ"));
 int w5x = this->width()/2 - w1->boundingRect().width()/2;
 int w5y = 400;
 w5->setPos(w5x,w5y);
 connect(w5,SIGNAL(clicked()),this,SLOT(read5()));
 scene->addItem(w5);

 Word1* w6 = new Word1(QString("Orange=trái cam"));
 int w6x = this->width()/2 - w1->boundingRect().width()/2;
 int w6y = 475;
 w6->setPos(w6x,w6y);
 connect(w6,SIGNAL(clicked()),this,SLOT(read6()));
 scene->addItem(w6);

 Word1* w7 = new Word1(QString("Grape=trái nho"));
 int w7x = this->width()/2 - w1->boundingRect().width()/2;
 int w7y = 550;
 w7->setPos(w7x,w7y);
 connect(w7,SIGNAL(clicked()),this,SLOT(read7()));
 scene->addItem(w7);

 Button* w8 = new Button(QString("Back"));
 int w8x = 600;
 int w8y = 625;
 w8->setPos(w8x,w8y);
 connect(w8,SIGNAL(clicked()),this,SLOT(back()));
 scene->addItem(w8);













}
void Game::fo() {
    scene->clear();
    setBackgroundBrush(QBrush(QImage(":/Images/food.jpg").scaled(1024,768)));
    Word1* w1 = new Word1(QString("Beef=thịt bò"));
    int w1x = this->width()/2 - w1->boundingRect().width()/2;
    int w1y = 100;
    w1->setPos(w1x,w1y);
    connect(w1,SIGNAL(clicked()),this,SLOT(read14()));
    scene->addItem(w1);

    Word1* w2 = new Word1(QString("Pork=thịt lợn"));
    int w2x = this->width()/2 - w1->boundingRect().width()/2;
    int w2y = 175;
    connect(w2,SIGNAL(clicked()),this,SLOT(read15()));
    w2->setPos(w2x,w2y);

    scene->addItem(w2);

    Word1* w3 = new Word1(QString("Lamb=thịt cừu"));
    int w3x = this->width()/2 - w1->boundingRect().width()/2;
    int w3y = 250;
    w3->setPos(w3x,w3y);
    connect(w3,SIGNAL(clicked()),this,SLOT(read16()));
    scene->addItem(w3);

    Word1* w4 = new Word1(QString("Oyster=hào"));
    int w4x = this->width()/2 - w1->boundingRect().width()/2;
    int w4y = 325;
    w4->setPos(w4x,w4y);
    connect(w4,SIGNAL(clicked()),this,SLOT(read17()));
    scene->addItem(w4);

    Word1* w5 = new Word1(QString("Lobster=tôm hùm"));
    int w5x = this->width()/2 - w1->boundingRect().width()/2;
    int w5y = 400;
    w5->setPos(w5x,w5y);
    connect(w5,SIGNAL(clicked()),this,SLOT(read18()));
    scene->addItem(w5);





    Button* w8 = new Button(QString("Back"));
    int w8x = 600;
    int w8y = 625;
    w8->setPos(w8x,w8y);
    connect(w8,SIGNAL(clicked()),this,SLOT(back()));
    scene->addItem(w8);
}
void Game::fa(){
    scene->clear();
    setBackgroundBrush(QBrush(QImage(":/Images/family.jpg").scaled(1024,768)));
    Word1* w1 = new Word1(QString("Wife=vợ"));
    int w1x = this->width()/2 - w1->boundingRect().width()/2;
    int w1y = 100;
    w1->setPos(w1x,w1y);
    connect(w1,SIGNAL(clicked()),this,SLOT(read8()));
    scene->addItem(w1);

    Word1* w2 = new Word1(QString("Husband=chồng"));
    int w2x = this->width()/2 - w1->boundingRect().width()/2;
    int w2y = 175;
    connect(w2,SIGNAL(clicked()),this,SLOT(read9()));
    w2->setPos(w2x,w2y);

    scene->addItem(w2);

    Word1* w3 = new Word1(QString("Uncle=chú"));
    int w3x = this->width()/2 - w1->boundingRect().width()/2;
    int w3y = 250;
    w3->setPos(w3x,w3y);
    connect(w3,SIGNAL(clicked()),this,SLOT(read10()));
    scene->addItem(w3);

    Word1* w4 = new Word1(QString("Aunt=dì"));
    int w4x = this->width()/2 - w1->boundingRect().width()/2;
    int w4y = 325;
    w4->setPos(w4x,w4y);
    connect(w4,SIGNAL(clicked()),this,SLOT(read11()));
    scene->addItem(w4);

    Word1* w5 = new Word1(QString("Son=con trai"));
    int w5x = this->width()/2 - w1->boundingRect().width()/2;
    int w5y = 400;
    w5->setPos(w5x,w5y);
    connect(w5,SIGNAL(clicked()),this,SLOT(read12()));
    scene->addItem(w5);

    Word1* w6 = new Word1(QString("Niece=cháu gái"));
    int w6x = this->width()/2 - w1->boundingRect().width()/2;
    int w6y = 475;
    w6->setPos(w6x,w6y);
    connect(w6,SIGNAL(clicked()),this,SLOT(read13()));
    scene->addItem(w6);



    Button* w8 = new Button(QString("Back"));
    int w8x = 600;
    int w8y = 625;
    w8->setPos(w8x,w8y);
    connect(w8,SIGNAL(clicked()),this,SLOT(back()));
    scene->addItem(w8);

}


void Game::f1(){
    //setBackgroundBrush(QBrush(QImage(":/Images/background1.jpg").scaled(1024,768)));
    setBackgroundBrush(QBrush(QImage(":/Images/backgroundfruit.jpg").scaled(1024,768)));

   playlist = new QMediaPlaylist();
   playlist->addMedia(QUrl("qrc:/sounds/Fruit.m4a"));
   playlist->setPlaybackMode(QMediaPlaylist::Loop);
   music = new QMediaPlayer();
   music->setPlaylist(playlist);
   music->play();

   scene->clear();

  Bananas*ba=new Bananas();
  scene->addItem(ba);
  Apple*ap=new Apple();
  scene->addItem(ap);
  Avocado*av=new Avocado();
  scene->addItem(av);
  Grape*g=new Grape();
  scene->addItem(g);
  Orange*o=new Orange();
  scene->addItem(o);
  Pineapple*p=new Pineapple();
  scene->addItem(p);





  bowl=new Bowl();
  scene->addItem(bowl);
  number1=new Number1();
  scene->addItem(number1);
  Button* back = new Button(QString("Back"));
  int backx = 10;
  int backy = 5;
  back->setPos(backx,backy);
  connect(back,SIGNAL(clicked()),this,SLOT(back()));
  scene->addItem(back);

}
void Game::fa1(){
   playlist = new QMediaPlaylist();
   playlist->addMedia(QUrl("qrc:/sounds/Family.m4a"));
   playlist->setPlaybackMode(QMediaPlaylist::Loop);
   music = new QMediaPlayer();
   music->setPlaylist(playlist);
   music->play();

   scene->clear();
   setBackgroundBrush(QBrush(QImage(":/Images/nightmare.jpg").scaled(1024,768)));
   thor=new Thor();
   scene->addItem(thor);

   Button* back = new Button(QString("Back"));
   int backx = 10;
   int backy = 5;
   back->setPos(backx,backy);
   connect(back,SIGNAL(clicked()),this,SLOT(back()));
   scene->addItem(back);

   Son*s=new Son();
   scene->addItem(s);
   score=new Score();
   scene->addItem(score);

   Niece*n=new Niece();
   scene->addItem(n);
    Uncle*u=new Uncle();
   scene->addItem(u);
   Aunt*au=new Aunt();
   scene->addItem(au);
   Husband*h=new Husband();
   scene->addItem(h);
   Wife*w=new Wife();
   scene->addItem(w);
   number2=new Number2();
   scene->addItem(number2);


}

void Game::fo1()
{



    playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/Doraemon.m4a"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();
    scene->clear();
    setBackgroundBrush(QBrush(QImage(":/Images/backgrounddoraemon.png").scaled(1024,768)));
    Button* back = new Button(QString("Back"));
    int backx = 10;
    int backy = 5;
    back->setPos(backx,backy);
    connect(back,SIGNAL(clicked()),this,SLOT(back()));
    scene->addItem(back);
    Jaian*j=new Jaian();
    scene->addItem(j);
    Doraemon*d=new Doraemon();
    scene->addItem(d);
    Pork*p=new  Pork();
    scene->addItem(p);
    Porktext*pt=new Porktext();
    scene->addItem(pt);
    Beef*be=new  Beef();
    scene->addItem(be);
    Beeftext*bet=new  Beeftext();
    scene->addItem(bet);
    Lamb*la=new  Lamb();
    scene->addItem(la);
    Lambtext*lat=new  Lambtext();
    scene->addItem(lat);
    lobster=new  Lobster();
    scene->addItem(lobster);
    Lobstertext*lot=new  Lobstertext();
    scene->addItem(lot);
    Oyster*oyster=new  Oyster();
    scene->addItem(oyster);
    Oystertext*oyt=new  Oystertext();
    scene->addItem(oyt);
    nobita=new Nobita();
    scene->addItem(nobita);
    number=new Number();
    scene->addItem(number);


}

void Game::web()
{
    QDesktopServices::openUrl(QUrl(QString("https://www.facebook.com/Vinylxianua-1642173926103955")));
}

void Game::changefa1()
{
    setBackgroundBrush(QBrush(QImage(":/Images/village.png").scaled(1024,768)));
}



void Game::displayMainMenu(){

   // Button fruit
    setBackgroundBrush(QBrush(QImage(":/Images/background.jpg").scaled(1024,768)));
    Button* fruit = new Button(QString("FRUIT"));
    int xfruit = (this->width()/2 - fruit->boundingRect().width()/2)-150;
    int yfruit = 175;
    fruit->setPos(xfruit,yfruit);
    connect(fruit,SIGNAL(clicked()),this,SLOT(f()));
    scene->addItem(fruit);
    Button* fruit1 = new Button(QString("FRUIT GAMES"));
    int xfruit1 = (this->width()/2 - fruit->boundingRect().width()/2)+150;
    int yfruit1 = 175;
    fruit1->setPos(xfruit1,yfruit1);
    connect(fruit1,SIGNAL(clicked()),this,SLOT(f1()));
    scene->addItem(fruit1);

  // Button food
    Button* food = new Button(QString("FOOD"));
    int xfood = (this->width()/2 - fruit->boundingRect().width()/2)-150;
    int yfood = 250;
    food->setPos(xfood,yfood);
    connect(food,SIGNAL(clicked()),this,SLOT(fo()));
    scene->addItem(food);
    Button* food1 = new Button(QString("FOOD GAMES"));
    int xfood1 = (this->width()/2 - fruit->boundingRect().width()/2)+150;
    int yfood1 = 250;
    food1->setPos(xfood1,yfood1);
    connect(food1,SIGNAL(clicked()),this,SLOT(fo1()));
    scene->addItem(food1);

    //Button family
    Button* family = new Button(QString("FAMILY"));
    int xfamily = (this->width()/2 - fruit->boundingRect().width()/2)-150;
    int yfamily = 325;
    family->setPos(xfamily,yfamily);
    connect(family,SIGNAL(clicked()),this,SLOT(fa()));
    scene->addItem(family);
    Button* family1 = new Button(QString("FAMILY GAMES"));
    int xfamily1 = (this->width()/2 - fruit->boundingRect().width()/2)+150;
    int yfamily1 = 325;
    family1->setPos(xfamily1,yfamily1);
    connect(family1,SIGNAL(clicked()),this,SLOT(fa1()));
    scene->addItem(family1);



    Button* web = new Button(QString("WEB"));
    int bxweb = this->width()/2 - fruit->boundingRect().width()/2-150;
    int byweb = 400;
    web->setPos(bxweb,byweb);
    connect(web,SIGNAL(clicked()),this,SLOT(web()));
    scene->addItem(web);

    Button* quitButton = new Button(QString("QUIT"));
    int bxPos1 = this->width()/2 - fruit->boundingRect().width()/2+150;
    int byPos1 = 400;
    quitButton->setPos(bxPos1,byPos1);
    connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
    scene->addItem(quitButton);


}
