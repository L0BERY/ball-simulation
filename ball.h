#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QTimer>

class ball : public QGraphicsEllipseItem
{
public:
    ball(QGraphicsEllipseItem* parent = nullptr);
    void advance(int step) override;

    void setSpeed(qreal, qreal);
    void setSize(qreal);
private:
    qreal xVelocity = 1;
    qreal yVelocity = 1;
    qreal size = 25;
};

