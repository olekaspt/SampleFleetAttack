#pragma once

#include "IShip.h"
#include "IRace.h"
#include <memory>

class Cruiser :
    public IShip
{
public:
    Cruiser(std::shared_ptr<IRace> race) : IShip(race)
    {
        m_dmgPerGun = 6;
        m_hull = 6;
        m_numberGuns = 2;
    }
    virtual ~Cruiser();

    virtual int GetHullPoints() override
    {
        int retVal = m_hull + m_race->GetHullPointMods();
        return retVal;
    }

    Cruiser() = delete;

};

