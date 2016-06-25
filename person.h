#ifndef PERSON_H
#define PERSON_H
#endif

 #include <QGraphicsPixmapItem>
 #include <QObject>
 #include <QGraphicsItem>
 #include <QMediaPlayer>


 class person:public QObject, public QGraphicsPixmapItem{
     Q_OBJECT
 public:
     person(QGraphicsItem * parent=0);

 public slots:
    virtual void moveP()=0;
 private:
     QMediaPlayer * bulletsound;
 };




#endif // PERSON_H
