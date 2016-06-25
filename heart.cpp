#include "heart.h"
#include <QFont>


 heart::heart(QGraphicsItem *parent): QGraphicsTextItem(parent){

     heart = 2;


     // draw the text
     setPlainText(QString("Heart: ") + QString::number(heart));
     setDefaultTextColor(Qt::red);
     setFont(QFont("times",16));
 }


 void heart::decrease(){
     heart--;
     setPlainText(QString("Heart: ") + QString::number(heart));
 }


 int heart::getHeart(){
     return health;
 }

