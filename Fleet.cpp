//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing C1-4
    @file PlainBox.cpp */
    
#include "Fleet.h"


Fleet::Fleet()
{
}  // end default constructor


Fleet::Fleet(const std::shared_ptr<IShip> theItem) : m_flagShip(theItem)
{
}  // end constructor


void Fleet::setFlagShip(const std::shared_ptr<IShip> theItem)
{
    m_flagShip = theItem;
}  // end setItem


std::shared_ptr<IShip> Fleet::getFlagShip() const
{
   return m_flagShip;
}  // end getItem


void Fleet::addFlotilla(const std::shared_ptr<IShip> theItem)
{ 
    m_flotilla.push_back(theItem);
}

std::vector<std::shared_ptr<IShip>> Fleet::getFlotilla()
{
    return m_flotilla;
}

