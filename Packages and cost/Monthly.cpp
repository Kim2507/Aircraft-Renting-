#include <iostream>
#include <sstream>
#include "Monthly.hpp"
using namespace std;



/*Monthly::~Monthly()
{
    cout << "Bye Monthly.\n";
}*/

// setters and getters
void Monthly::setMaintenance(double fee){
    if(fee >=0 ) maintenance_fee = fee;
    else cout << "Invalid maintenance fee.\n";
}


void Monthly::setFuel_Rate(double fuel){
    if(fuel >= 0) fuel_rate = fuel;
    else cout << "Invalid fuel rate.\n";
}


void Monthly::setPosition_cost(double pcost){
    if(pcost>=0) position_cost = pcost;
    else cout << "Invalid position cost.\n";
}


std::string Monthly::toString(){
    stringstream ss;
    //string super = __super::toString();
    ss << "Cost:\n" << "Maintenance: " << getMaintenance() << "\nFuel rate: " << getFuel_Rate() << "\nPosition cost: " << getPosition_cost() << "\nTotal: " << getTotal() << endl;
    return ss.str();
}

