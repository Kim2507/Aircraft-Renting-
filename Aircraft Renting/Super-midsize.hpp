
#pragma once
#ifndef SUPERMIDSIZE_HPP
#define SUPERMIDSIZE_HPP
#include <string>
#include "Fleet.hpp"

class SuperMidSize : public Fleet {
private:
    std::string commodations;
public:
    // Default constructor
    SuperMidSize() = default;

    // Costructor that takes arguments
    SuperMidSize(std::string name, int num_pass, std::string iednurance, int ibag_capacity, double width, double length, double height, double speed, std::string commodations) :Fleet(name, num_pass, iednurance, ibag_capacity, width, length, height, speed) {
        setCommodations(commodations);
    }

    //Destructor ( always makes destructor virtual)
    virtual ~SuperMidSize() = default;                    // Set default bc we do not do any work on destructor

     // Setters and getters 

    virtual std::string getCommodations() { return commodations; }
    virtual void setCommodations(std::string c);

    virtual std::string toString() override;

};


#endif /* Cabin_hpp */
/*Cabin
 -    numPassengers :  int     maximum number of passengers in light cabin is 7
 -    endurance: double    cabin endurance
 -    baggage_capacity : int     baggage capacity
 -    width : double    width of cabin
 -     length: double    length of cabin
 -    height : double    height of cabin
 -    speed: double    high- speed cruise
 -    technology: string     technologies are included in cabin
 -    comfort : string    comfort services are included in cabin
 +    Cabin()    default constructor
 +    Cabin(num_passengers : int, endurance: double, bag_capacity: int, width : double, length: int, height : double, speed : double, technoly : string, comfort : string);
 +    getNumPassengers() : int
 +    setNumPassenger( num_passengers : int) : void
 +    getEndurance () : double
 +    setEndurance( eendurance : double) : void
 +    getBaggage_capacity() : int
 +    setBaggage_capacity( bag_capacity : int) : void
 +    getWidth() : double
 +    setWidth( width : double) : void
 +    getLength() : double
 +    setLength ( length : double) : void
 +    getHeight () : double
 +    setHeight ( height : double) : void
 +    getSpeed() : double
 +    setSpeed( speed: double) : void
 +    getTechnology () : string
 +    setTechnology ( techonology : string) : void
 +    getComfort() : string
 +    setComfort( comfort : string) : void
 +    toString () : string*/

