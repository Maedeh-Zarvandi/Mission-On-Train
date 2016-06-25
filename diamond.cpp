#include "diamond.h"
 #include <QFont>


 diamond::diamond(QGraphicsItem *parent): QGraphicsTextItem(parent){
     // initialize the score to 0
     diamond = 0;


     // draw the text
    setPlainText(QString("Diamond: ") + QString::number(diamond));
     setDefaultTextColor(Qt::yellow);
     setFont(QFont("times",16));
 }


 void diamond::increase(){
    diamond++;
     setPlainText(QString("Diamond: ") + QString::number(diamond));
 }


 int diamond::getDiamond(){
     return diamond;
 }


