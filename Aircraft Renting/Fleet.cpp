//
//  Fleet.cpp
//  AIrplane_Renting
//
//  Created by Trinh My Kim on 3/4/21.
//

#include <iostream>
#include <sstream>
#include "Fleet.hpp"
using namespace std;

int Fleet::numfleets =0;

Fleet::Fleet(){
    numfleets++;
    setName("");
    setNumPassenger(minPass);
    setEndurance("");
    setBaggage_capacity(0);
    setWidth(0.0);
    setLength(0.0);
    setHeight(0.0);
    setSpeed(0.0);
}

Fleet::Fleet(std::string name, int num_pass, string iendnurance, int ibag_capacity, double width, double length, double height, double speed){
    setName(name);
    setNumPassenger(num_pass);
    setEndurance(iendnurance);
    setBaggage_capacity(ibag_capacity);
    setWidth(width);
    setLength(length);
    setHeight(height);
    setSpeed(speed);
    numfleets++;
}

Fleet::~Fleet(){
    //cout << "Bye Fleet " << getName() << endl;
    numfleets--;
}

void Fleet::setName(std::string iname){
    if(iname !=" ") name = iname;
    else cout << "Empty type name of fleet.\n";
}

void Fleet::setNumPassenger(int num_pass)
{
    if (num_pass >= minPass) num_passengers = num_pass;
    else cout << "Invalid number of passengers being entered.\n";
}

void Fleet::setEndurance(string end){
    if (end !="" ) endurance = end;
    else cout << "Invalid endurance.";
}


void Fleet::setBaggage_capacity(int bag_cap){
    if (bag_cap > 0 ) baggage_capacity = bag_cap;
    else cout << "Invalid bag capacity.";
}


void Fleet::setWidth(double w){
    if (w > 0 ) width = w;
    else cout << "Invalid width.";
}


void Fleet::setLength(double l){
    if (l > 0 ) length = l ;
    else cout << "Invalid length.";
}


void Fleet::setHeight(double h){
    if (h > 0 ) height= h;
    else cout << "Invalid height.";
}


void Fleet::setSpeed(double s){
    if (s>0) speed = s;
    else cout << "Invalid speed.";
}
string Fleet::toString(){
    stringstream ss;
    ss << getName()<< " [Number of passengers:" << getNumPassenger()  << ",Endurance: " << getEndurance() << ",Baggage capacity:"  << getBaggage_capacity() << " ftsq" << ",Width:" << getWidth()<< " ft" <<",Length:" << getLength() << " ft" << ",Height:" << getHeight() << " ft,Speed:" << getSpeed() << " mph]";
    return ss.str();
}

