#include <iostream>
#include <sstream>
#include "Acquisition.hpp"
using namespace std;


/*Acquisition::~Acquisition(){
    cout << "Bye Acquisition\n";
}*/

// setters and getters
void Acquisition::setMaintenance(double fee){
    if(fee >= 0 ) maintenance_fee = fee;
    else cout << "Invalid maintenance fee.\n";
}


void Acquisition::setFuel_Rate(double fuel){
    if(fuel >= 0) fuel_rate = fuel;
    else cout << "Invalid fuel rate.\n";
}


void Acquisition::setPosition_cost(double pcost){
    if(pcost>= 0) position_cost = pcost;
    else cout << "Invalid position cost.\n";
}



std::string Acquisition::toString(){
    stringstream ss;
    //string super = __super::toString();
    ss << "Cost:\n" << "Maintenance: " << getMaintenance() << "\nFuel rate: " << getFuel_Rate() << "\nPosition cost: " << getPosition_cost() << "\nTotal: " << getTotal() << endl;
    return ss.str();
}
