#pragma once
#include "secondwindow.h"
#include "ball.h"
#include "view.h"
#include <QWidget>
#include <QPushButton>
#include <QSpinBox>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(view*, ball*, QWidget *parent = nullptr);
    ~Widget();
    ball* cop_ball;
    view* cop_view;
    secondwindow* win;
    QTimer timer;

public slots:
    void go_start();
    void go_stop();
    void updateScene();
};

