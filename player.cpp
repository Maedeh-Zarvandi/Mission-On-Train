#include "player.h"
 #include <QGraphicsScene>
 #include <QKeyEvent>
 #include "weapon.h"
 #include "enemy.h"
#include<person.h>

player::player(QGraphicsItem *parent)
{
    bulletsound->setMedia(QUrl("qrc:/sound/gunshot_1.wav"));


    // set graphic
    setPixmap(QPixmap(":/photo/player1.png"));
}
