#pragma once

#include "IRace.h"
#include <memory>

class IShip
{
public:

    IShip(std::shared_ptr<IRace> race) : m_hull(0), m_numberGuns(0), m_dmgPerGun(0), m_race(race)
    {

    }

	virtual int GetHullPoints() = 0;

    virtual ~IShip() {}

protected:
	int m_hull;
	int m_numberGuns;
	int m_dmgPerGun;
	std::shared_ptr<IRace> m_race;

};

