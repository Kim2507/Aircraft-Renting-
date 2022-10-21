/*
Programmer: My Kim Trin h
Update: 03/27/2021
*/

/*Fleet
-    type : string     types of cabin
-    cabin_info : Cabin
+    Fleet()    default constructor
+    Fleet ( type : string)
+    getCabin_info() : Cabin
+    setCabin_info( info : Cabin)
+    toString() : string     displays fleet type and info*/

#pragma once
#ifndef FLEET_HPP
#define FLEET_HPP
#include <string>
//#include "Cabin.hpp"

class Fleet{
private:
    static int numfleets;           // Holds number of fleet that we have created so far
    const int minPass = 6;          // Minimum number of passengers is 7
protected:
    std::string name;               // Name of the fleet ex: PHENOM300, CITATION XLS, CHALLENGER 350
    int num_passengers;             // Holds number of passengers (minimum is 7 passengers)
    std::string endurance;               // Holds endurance of fleet
    int baggage_capacity;           // Holds baggage capacity 
    double width, length, height;   // Holds width, length, height
    double speed;                   // Holds speed of the fleet
    
    
public:
    Fleet();
    Fleet(std::string name,int num_passengers, std::string iendnurance, int ibag_capacity, double width, double length, double height, double speed);
    virtual ~Fleet();             // Don't set that to be default because it does increament static member variable evrytime it is called

    // Getters and setters
    virtual std::string getName() { return name;}
    virtual void setName(std::string name);

    virtual int getNumPassenger() { return num_passengers; }
    virtual void setNumPassenger(int num_pass);
    
    virtual std::string getEndurance () { return endurance;}
    virtual void setEndurance(std::string end);
    
    virtual int getBaggage_capacity() { return baggage_capacity;}
    virtual void setBaggage_capacity(int bag_cap);
    
    virtual double getWidth() { return width;}
    virtual void setWidth(double w);
    
    virtual double getLength() { return length;}
    virtual void setLength(double l);
    
    virtual double getHeight() { return height;}
    virtual void setHeight(double h);
    
    virtual double getSpeed() { return speed;}
    virtual void setSpeed(double s);
    
    
    
    int getNum_Fleet(){return numfleets;};
    
    virtual std::string toString();
    
    
    
};
#endif
