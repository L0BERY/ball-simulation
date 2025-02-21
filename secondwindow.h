#pragma once
#include <QWidget>
#include <QPushButton>
#include <QSpinBox>
#include <QLabel>

class secondwindow : public QWidget
{
    Q_OBJECT
public:
    secondwindow();
    ~secondwindow();
    QDoubleSpinBox *spx, *corner;
    QSpinBox *size;
    QPushButton *start, *stop;

    void setStart();
    void setStop();
};


