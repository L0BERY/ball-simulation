#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(view* view, ball* ball, QWidget *parent)
    : QWidget(parent)
{
    cop_ball = ball;
    cop_view = view;
    win = new secondwindow();
    setFixedSize(1200, 700);
    setWindowTitle("ball simulation");

    QHBoxLayout layout;
    layout.addWidget(view);
    layout.addWidget(win);
    setLayout(&layout);

    show();

    QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(updateScene()));
    QObject::connect(win->start, SIGNAL(clicked()), this, SLOT(go_start()));
    QObject::connect(win->stop, SIGNAL(clicked()), this, SLOT(go_stop()));

}

void Widget::go_start(){
    cop_ball->setSpeed(win->spx->value(), win->corner->value());
    cop_ball->setSize(win->size->value());
    timer.start(15);
    win->setStart();
}

void Widget::go_stop(){
    timer.stop();
    cop_ball->setPos(400 - win->size->value()/2, 300 - win->size->value()/2);
    win->setStop();
}

void Widget::updateScene(){
    cop_view->scene->advance();
    cop_view->update();
}

Widget::~Widget()
{
    delete cop_ball;
    delete cop_view;
    delete win;
}

