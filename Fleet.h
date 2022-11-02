

#pragma once

#include <vector>
#include <memory>


// Declaration for the class 

class IShip;

class Fleet
{
private:
   // Data field
   std::shared_ptr<IShip> m_flagShip;
   std::vector<std::shared_ptr<IShip>> m_flotilla;
   
public:
   // Default constructor
    Fleet();
   
   // Parameterized constructor
    Fleet(const std::shared_ptr<IShip> flagship);
   
   // Mutator method that can change the value of the data field
   void setFlagShip(const std::shared_ptr<IShip>  theItem);
   
   // Accessor method to get the value of the data field
   std::shared_ptr<IShip> getFlagShip() const;

   void addFlotilla(const std::shared_ptr<IShip> theItem);

   std::vector<std::shared_ptr<IShip>> getFlotilla();

}; // end PlainBox


