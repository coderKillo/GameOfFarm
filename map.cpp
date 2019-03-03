#include "map.h"
#include "tarrain.h"

Map::Map()
{
    GrasTarrain = new Tarrain(QColor(Qt::green));
    WaterTarrain = new Tarrain(QColor(Qt::blue));
}

Map::~Map()
{

}

void Map::render()
{
    this->addItem(GrasTarrain);
    GrasTarrain->setPos(20,300);
    this->addItem(GrasTarrain);
}
