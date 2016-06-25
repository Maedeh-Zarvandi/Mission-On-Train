#ifndef DIAMOND_H
#define DIAMOND_H

#endif

 #include <QGraphicsTextItem>


 class diamond: public QGraphicsTextItem{
 public:
     diamond(QGraphicsItem * parent=0);
     void increase();
     int getDiamond();
private:
     int diamond;
 };


 #endif // SCORE_H

#endif // DIAMOND_H
