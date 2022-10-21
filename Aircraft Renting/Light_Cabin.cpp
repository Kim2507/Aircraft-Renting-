#include <iostream>
#include <sstream>
#include "Fleet.hpp"
#include "Light_Cabin.hpp"
using namespace std;

LightCabin::LightCabin()
{
    cout << "Default constructor.\n";
}

LightCabin::~LightCabin()
{
    cout << "LB destructor.\n";
}

/*LightCabin::LightCabin(const LightCabin& src)
{
    cout << "Copy constructor" << endl;

    // The ctor-initializer of this constructor delegates first to the
    // non-copy constructor to allocate the proper amount of memory.

    // The next step is to copy the data
    ptr = src.ptr;
   
}

// Assignment Operator
LightCabin& LightCabin::operator=(const LightCabin &rhs)
{
    // Check for self-assignment
    if(this == &rhs) return *this;
    
    // Free the old memory
    delete [] ptr;
    ptr = nullptr;
    // Allocate the new memory
    nums_lb = rhs.nums_lb;
    ptr = new LightCabin[nums_lb];
    // Copy the data
    ptr = rhs.ptr;
    return *this;
    
}*/


void LightCabin::setCommodations(string c) {
    if (c != "") commodations = c;
    else cout << "This is an invalid empty commodations.\n";

}

string LightCabin::toString(){
    stringstream ss;
    ss << Fleet::toString();
    ss << "\n\tTechnology & Comfort: " << getCommodations() << endl;
    return ss.str();
}

/*// Move constructor
LightCabin::LightCabin(LightCabin&& src) noexcept
{
    cout << "Move constructor.\n" << getName();
    moveFrom(src);
}

//Move assignment operator
LightCabin& LightCabin::operator=(LightCabin&& rhs) noexcept
{
    cout << "Move assignment operator.\n";
    // check for self assignment
    if(this == &rhs) return *this;
    // free the old memory
    //cleanup();
    moveFrom(rhs);
    return *this;
}

void LightCabin::moveFrom(LightCabin& src) noexcept
{
    // Shallow copy of data
    //nums_cabin = src.nums_cabin;
    //cabin_ptr = src.cabin_ptr;
    name = src.name;
    num_passengers = src.num_passengers;
    endurance = src.endurance;
    baggage_capacity = src.baggage_capacity;
    width = src.width;
    length = src.length;
    height = src.height;
    speed = src.speed;
    
    
    // Reset the source object, because the ownership has been moved
    //src.nums_cabin = 0;
    //src.cabin_ptr = nullptr;
}*/



