/*#include <iostream>
#include <string>
#include "Share.hpp"
#include "Lease.hpp"
#include "Card.hpp"
#include "Acquisition.hpp"
#include "Monthly lease.hpp"
using namespace std;

int main(){
    // Creating Share program
    Acquisition ac1(70000,5748,0);
    Share share1("Share Package Elly Zhang","Bussiness or indivdual has more than 50 fly hours per year",24,ac1);
    
    // Creating Lease program
    Monthly card1_cost("Monthly payment Jon Hally",1000,450);
    Card card1("Card Package Arison Obama","Business or individual has more than 50  fly hours per years but don't want to pay once and burn pocket",24, card1_cost);
    
    // Print by calling method from itself
    // cout << share1.toString();
    //cout << card1.toString();
    
    // Demonstrate polymorphism by creating the reference and pointer of parent class 
    // Reference 
    cout << "Demonstrate polymorphism.\n";
    Packages& ref = share1;
    cout << ref.toString();

    // Pointer point to the address
    Packages* ptr = &card1;
    cout << ptr->toString();



    
    
    return 0;
}*/
