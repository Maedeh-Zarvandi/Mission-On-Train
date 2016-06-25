#include "person.h"
 #include <QGraphicsScene>
 #include <QKeyEvent>
 #include "weapon.h"
 #include "enemy.h"






person::person(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
      bulletsound = new QMediaPlayer();
}
