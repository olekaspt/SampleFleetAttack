#include "ShipFactory.h"


#include "BattleShip.h"
#include "Cruiser.h"
#include "Zerg.h"
#include "Human.h"

ShipFactory & ShipFactory::GetShipFactory()
{
	static ShipFactory s;
	return s;
} // instance


std::shared_ptr<IShip> ShipFactory::CreateShip(enumOfTypeShip enumOfTypeShipType, raceOfTypeShip race)
{
	std::shared_ptr<IShip> retVal = nullptr;
	if (enumOfTypeShipType == BattleShipType)
	{
		retVal = std::make_shared<BattleShip>(m_raceMap[race]);
	}
    else if (enumOfTypeShipType == CruiserType)
    {
        retVal = std::make_shared<Cruiser>(m_raceMap[race]); 
    }

	return retVal;
}

ShipFactory::ShipFactory() 
{
		
	std::shared_ptr<IRace> t1 = std::make_shared<Zerg>();
	std::shared_ptr<IRace> t2 = std::make_shared<Human>();
	m_raceMap.insert(std::pair(ZergType, t1));
	m_raceMap[HumanType]= t2;
}


 ShipFactory::~ShipFactory() 
{

}