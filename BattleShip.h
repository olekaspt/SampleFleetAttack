#pragma once

#include "IShip.h"
#include "IRace.h"
#include <memory>

class BattleShip : public IShip
{
public:

	BattleShip(std::shared_ptr<IRace> race) : IShip(race)
	{
        m_dmgPerGun = 10;
        m_hull = 10;
        m_numberGuns = 2;
	}

    ~BattleShip() {}

	virtual int GetHullPoints() override
	{
		int retVal = m_hull + m_race->GetHullPointMods();
		return retVal;
	}


    BattleShip() = delete;

};

