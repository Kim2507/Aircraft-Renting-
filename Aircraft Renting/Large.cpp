#include <iostream>
#include <sstream>
#include "Large.hpp"
using namespace std;



void Large::setCommodations(string c) {
    if (c != "") commodations = c;
    else cout << "This is an invalid empty commodations.\n";

}

string Large::toString() {
    stringstream ss;
    ss << Fleet::toString();
    ss << "\n\tTechnology & Comfort: " << getCommodations() << endl;
    return ss.str();
}




