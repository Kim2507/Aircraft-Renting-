#include <iostream>
#include <sstream>
#include "Share.hpp"
using namespace std;

/*Share::Share(){
    cout << "Share package being created with empty information.\n";
}

Share::~Share(){
    cout << "Bye Share Package.\n";
}*/



/*void Share::setIdeal(std::string ideal){
    if(ideal!=" ") ideal_for = ideal;
    else cout << "Empty ideal.\n";
}


void Share::setMin_Commit(int min){
    if(min > 0 ) minimun_commiment = min;
    else cout << "Invalid minimum amout of commitment.\n";
}*/


void Share::setCost(Acquisition i_a){
    a.setMaintenance(i_a.getMaintenance());
    a.setPosition_cost(i_a.getPosition_cost());
    a.setFuel_Rate(i_a.getFuel_Rate());
    a.getTotal();
}


std::string Share::toString(){
    stringstream ss;
    //string super = __super::toString();
    ss << "\tShare: " << "[Distinction:" << getDistinction() << ",Ideal for:" << getIdeal() << ",Minimum commitment:" << getMin_Commit() << "]" << endl;
    return ss.str();
}
