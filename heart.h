#ifndef HEART_H
#define HEART_H

#endif

#include <QGraphicsTextItem>


 class heart: public QGraphicsTextItem{
 public:
     heart(QGraphicsItem * parent=0);
     void decrease();
     int getHeart();
 private:
     int heart;
};



#endif // HEART_H
