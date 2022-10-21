#include <iostream>
#include <sstream>
#include "Lease.hpp"
using namespace std;

/*Lease::Lease(){
    cout << "Lease package being created with empty information.\n";
}*/

/*Lease::~Lease(){
    cout << "Bye Lease Package.\n";
}*/




void Lease::setCost(Monthly i_m){
    setMaintenance(i_m.getMaintenance());
    setPosition_cost(i_m.getPosition_cost());
    setFuel_Rate(i_m.getFuel_Rate());
    total = i_m.getTotal();
}



std::string Lease::toString(){
    stringstream ss;
    //string super = __super::toString();
    ss << "\tLease: " << "[Distinction:" << getDistinction() << ",Ideal for:" << getIdeal() << ",Minimum commitment:" << getMin_Commit() << "]" << endl;
    return ss.str();
}
