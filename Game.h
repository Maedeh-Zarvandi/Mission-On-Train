#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include "player.h"
#include "diamond.h"
#include "heart.h"
#include"train.h"
#include<QObject>

class Game: public QObject, public QGraphicsView{
Q_OBJECT
 public:
     Game(QWidget * parent=0);


     QGraphicsScene * scene;
     QGraphicsPixmapItem*im,*im1,*im2,*im3,*im4,im5;
     QTimer*t1,*t2,*t3,*t4;
      train *Trainn;
     player * Player;
     diamond * Diamond;
     heart * Heart;
public slots:
      void move();


 };
#endif // GAME_H
