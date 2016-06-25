#ifndef PLAYER_H
#define PLAYER_H
#include"person.h"

#endif // PLAYER_H

class player:public person{
public:
      player(QGraphicsItem * parent=0);
public slots:
    virtual void moveP();
};
