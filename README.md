# SampleFleetAttack

The purpose of the code is to be used a walkthrough of simple class design.  This can be referenced for Lab08

To facilate this, imagine below is the requirements for the game we are supposed to implement

We are going to generate a Sci-Fi fleet battler.  Players will generate a fleet of ships and go to head-to-head combat.

A fleet will consist of a Flagship, which will be a singular ship.  And then have zero or more ships that will be be the flotilla.  

We will have various types of ships.  Battleships (Heavy,Slow,HardHitting), Cruisers(Normal), and Destroyers(Light,Fast,SmallerWeapons).

Each Ship will have
* Max HitPoints representing the health.
* Current HitPoints
* Number of weapons on the ship
* How much each weapon is able to do

Additionally, there will be several species of aliens.  Zerg, Human, and Protos.

We want these species (races), to modify the ships.  For example one species, may be noted for really sturdy ships, but the the weapons don't hit as much (i.e. Tanks).  While others may have fewer hitpoints, but hit really hard (i.e. Glass Cannons).  And maybe the last one balanced one.

We want Interface class for all the Ships and Species, so we can define what are the expected methods.  This should be an abstract class, preferablly a pure abstract class.

We want to control how the ships are created.  And thus will have a ShipFactory class whose responsibility is create the Ships.

We also want to control access to the Species/Races so we could institute a research mechanic, so that the species mods could be modified.  And want to have this done in one place.

Want to use either Smart Pointers or RAII, no dumb pointers.

Implement this in a way to use containment to avoid the issue of too many concrete classes.   I.e. A Battleship that is a Zerg species vs. ZergBattleShip.

Make a executable that will allow one to have  two opposing fleets, and have them fight.  You can just hard code the fleets, don’t worry about adding complex UI\text system to setup the parties (unless you really want to, but that is not part to of the assignment).

The requirements is not compete, as I did this on purpose.  You will need to make assumptions or decision points you had to make to implement this.  These will need to be documented in the lab report.   



# The classes

The first thing is to identify classes to make above

# Make the Factory \ Singleton


# Make the Game class to control things


# How would we Implement Research Mechanic 


