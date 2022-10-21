#include <iostream>
#include <sstream>
#include "Mid-size.hpp"
using namespace std;


void MidSize::setCommodations(std::string c) {
    if (c != "") commodations = c;
    else cout << "This is an invalid empty commodations.\n";

}
string MidSize::toString() {
    stringstream ss;
    ss << Fleet::toString();
    ss << "\n\tTechnology & Comfort: " << getCommodations() << endl;
    return ss.str();
}








