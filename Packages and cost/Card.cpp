#include <iostream>
#include <sstream>
#include "Card.hpp"
using namespace std;

/*Card::Card(){
    cout << "Card package being created with empty information.\n";
}

Card::~Card(){
    cout << "Bye Card.\n";
    //delete [] m;
    //m = nullptr;
}*/

/*void Card::setIdeal(std::string ideal){
    if(ideal!=" ") ideal_for = ideal;
    else cout << "Empty ideal.\n";
}*/


/*void Card::setMin_Commit(int min){
    if(min > 0 ) minimun_commiment = min;
    else cout << "Invalid minimum amout of commitment.\n";
}*/


void Card::setCost(Monthly i_m){
    setMaintenance(i_m.getMaintenance());
    setFuel_Rate(i_m.getFuel_Rate());
    setPosition_cost(i_m.getPosition_cost());
    total = i_m.getTotal();
    
}


/*Card::Card(Monthly *ptr_src)
{
    ptr_m->setMaintenance(ptr_src->getMaintenance());
    ptr_m->setPosition_cost(ptr_src->getPosition_cost());
    ptr_m->setFuel_Rate(ptr_src->getFuel_Rate());
    ptr_m->getTotal();
    ptr_m = ptr_src;
}*/



std::string Card::toString(){
    stringstream ss;
    //string super = __super::toString();
    ss << "\tCard: " << "[Distinction:" << getDistinction() << ",Ideal for:" << getIdeal() << ",Minimum commitment:" << getMin_Commit() << "]" << endl;
    return ss.str();
}

/*void Card::moveFrom(Card& src) noexcept
{
    // Shallow copy of data
    m = src.m;
    //setCost(src.m);

    // Reset the source object, because ownership has been moved!
    delete [] src.m;
    src.m = nullptr;
}*/

/*void Card::cleanup() noexcept
{
    delete [] m;
    m = nullptr;
}*/

/*Card& Card::operator=(Card&& rhs) noexcept
{
    cout << "Move assignment operator" << endl;

    // check for self-assignment
    if (this == &rhs) {
        return *this;
    }

    // free the old memory
    cleanup();

    moveFrom(rhs);

    return *this;
}

Card::Card(Card&& src) noexcept
{
    cout << "Move constructor" << endl;

    moveFrom(src);
    
}*/


