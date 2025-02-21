#include "secondwindow.h"

secondwindow::secondwindow(): QWidget{}
{
    QFont font("Times", 15, QFont::Bold);
    setFont(font);
    start = new QPushButton("Start", this);
    stop = new QPushButton("Stop", this);
    stop->setEnabled(false);
    start->setGeometry(30, 490, 280, 40);
    stop->setGeometry(30, 540, 280, 40);
    start->setStyleSheet("background-color: lime;");
    stop->setStyleSheet("background-color: red;");

    QLabel* text1 = new QLabel("Speed(0-5): ", this);
    text1->setGeometry(30, 390, 200, 40);

    QLabel* text2 = new QLabel("Сorner(-180-180): ", this);
    text2->setGeometry(30, 440, 200, 40);

    QLabel* text3 = new QLabel("Ball size(15-50): ", this);
    text3->setGeometry(30, 325, 200, 40);

    size = new QSpinBox(this);
    size->setGeometry(225, 325, 85, 40);
    size->setValue(25);
    size->setRange(15, 50);
    spx = new QDoubleSpinBox(this);
    spx->setGeometry(225, 390, 85, 40);
    corner = new QDoubleSpinBox(this);
    corner->setGeometry(225, 440, 85, 40);
    spx->setMaximum(5);
    corner->setRange(-180, 180);
    spx->setSingleStep(0.1);
    corner->setSingleStep(0.1);
    spx->setDecimals(1);
    corner->setDecimals(1);
    spx->setValue(1);
    corner->setValue(45);
    corner->setSuffix("°");
}

void secondwindow::setStart(){
    size->setEnabled(false);
    spx->setEnabled(false);
    corner->setEnabled(false);
    start->setEnabled(false);
    stop->setEnabled(true);
}

void secondwindow::setStop(){
    size->setEnabled(true);
    spx->setEnabled(true);
    corner->setEnabled(true);
    start->setEnabled(true);
    stop->setEnabled(false);
}

secondwindow::~secondwindow(){
    delete spx;
    delete corner;
    delete start;
    delete stop;
    delete size;
}
