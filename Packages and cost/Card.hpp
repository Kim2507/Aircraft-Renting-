//
//  Card.hpp
//  AIrplane_Renting
//
//  Created by Trinh My Kim on 3/5/21.
//
#pragma once
#ifndef CARD_HPP
#define CARD_HPP
#include <string>
#include "Monthly.hpp"

class Card : public Monthly {
private:
    const std::string Card_distinction = "Prepay 25 hours at time";
    const std::string ideal_for = "25-50 hours per year";
    const std::string minimun_commiment = "25 hours over 24 months";
    double total;
    

public:
    Card() = default;
    
    Card(Monthly m){
        setCost(m);
    }
    //Card(Monthly *ptr_src);
    virtual ~Card() = default;
    
        
    
    // Getters and setters
    virtual std::string getDistinction() { return Card_distinction;}
    
    virtual std::string getIdeal() { return ideal_for;};
    //virtual void setIdeal(std::string ideal);
    
    virtual std::string getMin_Commit() {return minimun_commiment;}
    //virtual void setMin_Commit(int min);
    //virtual void setTotal();
    //virtual double getTotal() { return total};
    virtual double getCost() { return total;};
    virtual void setCost(Monthly i_m);
    //virtual void setCost(Monthly *ptr_src);
    virtual std::string toString();
    //Card& operator=(const Card& rhs); // Copy constructor
    //Card& operator=(Card&& rhs) noexcept;  // Move assignment
    Card(Monthly&& src) noexcept; // Move constructor
};


#endif /* Card_hpp */
