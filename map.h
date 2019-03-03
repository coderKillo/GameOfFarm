#ifndef MAP_H
#define MAP_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <vector>
class Tarrain;

class Map : public QGraphicsScene
{
public:
    Map();
    virtual ~Map();

    void render();

private:
    std::vector<QGraphicsItem*> m_map;
    Tarrain* GrasTarrain;
    Tarrain* WaterTarrain;
};

#endif // MAP_H
