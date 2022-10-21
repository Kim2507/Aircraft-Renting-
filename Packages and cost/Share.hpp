//
//  Share.hpp
//  AIrplane_Renting
//
//  Created by Trinh My Kim on 3/5/21.
//
#pragma once
#ifndef SHARE_HPP
#define SHARE_HPP
#include <string>
#include "Acquisition.hpp"

class Share {
private:
    const std::string share_distinction = "Own an asset";
private:
    const std::string ideal_for = "50+ hours per year";
    const std::string minimun_commiment = "36 months";
    //int cost;
    Acquisition a;
public:
    Share() = default;
    
    Share(std::string name,std::string ideal, int min_commit, Acquisition i_a){
        //setIdeal(ideal);
        //setMin_Commit(min_commit);
        setCost(i_a);
    }
    virtual ~Share() = default;
        
    
    // Getters and setters
    std::string getDistinction() { return share_distinction;}
    
    virtual std::string getIdeal() { return ideal_for;};
    //virtual void setIdeal(std::string ideal);
    
    virtual std::string getMin_Commit() {return minimun_commiment;}
    //virtual void setMin_Commit(int min);
    
    virtual Acquisition getCost() {return a;}
    virtual void setCost(Acquisition i_a);
    
    virtual std::string toString();
    
    
};


#endif /* Share_hpp */
