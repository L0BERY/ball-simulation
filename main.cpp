#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    ball ball;
    scene.addItem(&ball);
    view view(&scene);
    Widget w(&view, &ball);

    return a.exec();
}
