// FleetAttack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Fleet.h"
#include "Iship.h"
#include "BattleShip.h"
#include "Cruiser.h"
#include "ShipFactory.h"
#include "Zerg.h"
#include "IRace.h"
#include "FleetAttack.h"

int main()
{
    Fleet fleet1;
	Fleet fleet2;

	std::shared_ptr<IShip> val = ShipFactory::GetShipFactory().CreateShip(ShipFactory::BattleShipType, ShipFactory::ZergType);

	std::shared_ptr<BattleShip> battleShip = std::dynamic_pointer_cast<BattleShip>(val);

    fleet1.setFlagShip(battleShip);

    val = ShipFactory::GetShipFactory().CreateShip(ShipFactory::CruiserType, ShipFactory::HumanType);

    std::shared_ptr<Cruiser> cruiser = std::dynamic_pointer_cast<Cruiser>(val);

    fleet2.addFlotilla(cruiser);

    std::vector<std::shared_ptr<IShip> > flotilla = fleet1.getFlotilla();


}


