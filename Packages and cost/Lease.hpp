//
//  lease.hpp
//  AIrplane_Renting
//
//  Created by Trinh My Kim on 3/5/21.
//
#pragma once
#ifndef LEASE_HPP
#define LEASE_HPP
#include <string>
#include "Monthly.hpp"

class Lease : public Monthly{
private:
    const std::string lease_distinction = "No acquistition fee";
private:
    const std::string ideal_for = "50+ hours per year";
    const std::string minimun_commiment = "24–36 months";
    //int cost;
    double total;
public:
    Lease() = default;
    
    Lease(Monthly i_m){
        setCost(i_m);
    }
    virtual ~Lease() = default;
        
    
    // Getters and setters
    virtual std::string getDistinction() { return lease_distinction;}
    
    virtual std::string getIdeal() { return ideal_for;};
    //virtual void setIdeal(std::string ideal);
    
    virtual std::string getMin_Commit() {return minimun_commiment;}
    //virtual void setMin_Commit(std::string min);
    
    virtual double getCost() {return total;}
    virtual void setCost(Monthly i_m);
    
    virtual std::string toString();
    
    
};


#endif /* lease_hpp */
