#include <QGraphicsView>

class view : public QGraphicsView
{
public:
    QGraphicsScene* scene;
    view(QGraphicsScene* scene, QWidget* parent = nullptr);
};


