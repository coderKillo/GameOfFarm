#ifndef TARRAINFACTORY_H
#define TARRAINFACTORY_H

#include <map>
#include <qnamespace.h>
#include <memory>

#include "tarrain.h"

class TarrainFactory
{
public:
    TarrainFactory();
    std::unique_ptr<Tarrain>&& createTarrain(char c) const
    {
        auto tarrain = std::make_unique<Tarrain>(); //TODO create NullTarrain

        auto it = m_map.find(c);
        if(it != m_map.end())
        {
            tarrain->setColor(QColor(it->second));
        }
        return std::move(tarrain);
    }

private:
    const std::map<char, Qt::GlobalColor> m_map =
    {
        {'r',Qt::red},
        {'b',Qt::blue},
        {'g',Qt::green},
    };
};

#endif // TARRAINFACTORY_H
