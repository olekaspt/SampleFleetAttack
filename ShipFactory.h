#pragma once


#include "IShip.h"
#include <memory>
#include <map>

//fwd declaration
class IRace;

class ShipFactory
{
public:
	enum enumOfTypeShip { BattleShipType, CruiserType };
	enum raceOfTypeShip { ZergType, ProtosType, HumanType };


	std::shared_ptr<IShip>  CreateShip(enumOfTypeShip shipType, raceOfTypeShip raceType);

	static 	ShipFactory & GetShipFactory();

  	ShipFactory(const ShipFactory &) = delete;
  	ShipFactory & operator = (const ShipFactory &) = delete;

private:
	std::map<raceOfTypeShip,std::shared_ptr<IRace>> m_raceMap;

	ShipFactory() ;
    ~ShipFactory() ;

};

