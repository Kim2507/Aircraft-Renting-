#include <iostream>
#include <sstream>
#include "Super-midsize.hpp"
using namespace std;


void SuperMidSize::setCommodations(string c) {
    if (c != "") commodations = c;
    else cout << "This is an invalid empty commodations.\n";

}

string SuperMidSize::toString() {
    stringstream ss;
    ss << Fleet::toString();
    ss << "\n\tTechnology & Comfort: " << getCommodations() << endl;
    return ss.str();
}




