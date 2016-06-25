#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"
#include <QMediaPlayer>
#include<QPixmap>
#include<QGraphicsPixmapItem>
#include<QGraphicsView>
#include <QBrush>
#include <QImage>
#include<QObject>


Game::Game(QWidget *parent): QObject(){
     // create the scene
     scene = new QGraphicsScene();
     scene->setSceneRect(0,0,800,600); // make the scene 800x600 instead of infinity by infinity (default)
    // setBackgroundBrush(QBrush(QImage(":/photo/background3.jpg")));


     im=scene->addPixmap(QPixmap(":/photo/background3.jpg").scaled(1500,450));
     im->setPos(-700,0);
     im3=scene->addPixmap(QPixmap(":/photo/background3.jpg").scaled(1500,450));
     im4=im;
     im1=im3;



     // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
     // it can be used to visualize scenes)
     setScene(scene);
     setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     setFixedSize(800,600);

     //moving background
     t1=new QTimer;
     t1->setInterval(20);
     t1->start();
     QObject:: connect(t1,SIGNAL(timeout()),this,SLOT(move()));

     Trainn->trn = scene->addPixmap(QPixmap(":/photo/tr.png").scaled(800,60));
     Trainn->trn->setPos(-40,350);





     // create the player
   /*  player = new Player();
     player->setPos(400,500); // TODO generalize to always be in the middle bottom of screen
     // make the player focusable and set it to be the current focus
     player->setFlag(QGraphicsItem::ItemIsFocusable);
     player->setFocus();
     // add the player to the scene
     scene->addItem(player);*/


     // create the score/health
   /*  score = new Score();
     scene->addItem(score);
     health = new Health();
     health->setPos(health->x(),health->y()+25);
     scene->addItem(health);*/


     // spawn enemies
   /*  QTimer * timer = new QTimer();
     QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
     timer->start(2000);*/


     // play background music
     QMediaPlayer * music = new QMediaPlayer();
     music->setMedia(QUrl("qrc:/sound/trains003.wav"));
     music->play();


     show();
 }

 void Game::move()
 {
     // while(1){
      im4->setPos(im4->pos().x()+5,im4->pos().y());
      im1->setPos(im1->pos().x()+5,im1->pos().y());
      if(im->pos().x()==0){
          im3->setPos(-1500,0);
          im1=im3;
      }
      if(im3->pos().x()==0){
          im->setPos(-1500,0);
          im4=im;
      }
      // }
 }


