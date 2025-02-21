#include "view.h"

view::view(QGraphicsScene* scene, QWidget* parent)
    : QGraphicsView(scene, parent)
{
    scene->setSceneRect(0, 0, 800, 600);
    this->scene = scene;
    setRenderHint(QPainter::Antialiasing);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 600);
}


