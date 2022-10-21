#pragma once
#ifndef MONTHLY_HPP
#define MONTHLY_HPP
#include <string>


class Monthly{
private:
    
    double monthly_total;
    double maintenance_fee;
    double fuel_rate;       // Cost on each filght prior a month
    double  position_cost;  // Depends on  area
    
public:
    Monthly() = default;
    Monthly(double maintain, double position){
        setMaintenance(maintain);
        setPosition_cost(position);
        setFuel_Rate(0);
    }

    //sometimes cost depends on  conditions
    Monthly(double maintain, double position, double fuel_rate){
        setMaintenance(maintain);
        setPosition_cost(position);
        setFuel_Rate(fuel_rate);
    }
    
    
    virtual ~Monthly() = default;
    
    // setters and getters
    virtual double getMaintenance() { return maintenance_fee;}
    virtual void setMaintenance(double fee);
    
    virtual double getFuel_Rate() { return fuel_rate;}
    virtual void setFuel_Rate(double fuel);
    
    virtual double getPosition_cost() { return position_cost;}
    virtual void setPosition_cost(double pcost);
    
    virtual double getTotal() {
        return monthly_total = maintenance_fee + position_cost + fuel_rate;
    }
    
    
    virtual std::string toString();
    
    
    
};
#endif

//#include <stdio.h>
