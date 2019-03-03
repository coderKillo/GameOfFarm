#ifndef TARRAIN_H
#define TARRAIN_H
#include <QGraphicsObject>

class Tarrain: public QGraphicsRectItem
{
public:
    Tarrain()
    {
        this->setRect(QRect(0,0,_WIDTH,_HEIGHT));
    }
    virtual ~Tarrain(){}
    Tarrain& operator=(const Tarrain&)
    {

    }
    void setColor(const QColor& color)
    {
        this->setPen(QPen(color));
    }
    void setPos(const QPoint& pos)
    {
        this->setPos(pos);
    }
    void move(const QPoint& delta)
    {
        this->setPos(this->pos() + delta);
    }

private:
    const uint8_t _WIDTH = 16;
    const uint8_t _HEIGHT = 16;
};

#endif // TARRAIN_H
