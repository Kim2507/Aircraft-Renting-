#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include "Fleet.hpp"
#include "Light_Cabin.hpp"
#include "Mid-size.hpp"
#include "Super-midsize.hpp"
#include "Large.hpp"
#include "Card.hpp"
#include "Acquisition.hpp"
#include "Lease.hpp"
#include "Share.hpp"

using namespace std;
//vector<Fleet> vect_lb;
string light_cabin_commodations = "Light Cabin Commodations";
string mid_size_commodations = "Mid-size Comodations";
string super_size_commodations = "Super-size commodations";
string large_commodation = "Large commodations";
//Fleet *lb1 = new LightCabin("Embraer Phenom 300", 6, "4 hours", 74, 51, 17.2, 4.9, 495,light_cabin_commodations);
LightCabin lb1("Embraer Phenom 300", 6, "4 hours", 74, 51, 17.2, 4.9, 495,light_cabin_commodations);
LightCabin lb2("Cessna Citation XLS", 7, "4:15 hours",79,5.5,18.6, 5.7,495,light_cabin_commodations);

// Two kinds of mid-size cabin
MidSize ms1("Cessna Citation Sovereign", 8, "7:15 hours", 100,5.5,24.2,5.7, 495, mid_size_commodations);
MidSize ms2("Ciatation Latitude",7,"7 hours", 100, 6.4,21.75, 61, 495, mid_size_commodations);

// Two kinds of super midsize cabin
SuperMidSize super_ms1("Bombardier Challenger 350", 9, "7:45 hours", 106, 7.17,28.6,6,540,super_size_commodations);
SuperMidSize super_ms2("Cessna Citation Longitude", 8, "7:45 hours", 112, 6.42, 28.83,6, 547, super_size_commodations);

// Five kinds of large size of  cabin
Large large1("Bombardier Challenger 650",11, "8:45 hours", 115, 7.92, 28.4,6,540,large_commodation);
Large large2("GulfStream G450",14, "9:45 hours", 169, 7,45.1,6,547,large_commodation);
Large large3("Bombardier Global 5000",13,"11:45 hours",195, 7.92,45.5,6.17,560,large_commodation);
Large large4("Bombardier Global 6000", 13, "13:30 hours", 195,7.92,48.1,6.17,560,large_commodation);
Large large5("Bombardier Global 7500", 14,"16 hours", 195, 8, 59.6, 6.17,593, large_commodation);
//vector<Fleet*> ptr = {lb1,lb1};
vector<Fleet> vect_lb = {lb1, lb1,lb1,lb2, lb2,lb2}; // 3 lb1, 3 lb2
vector<Fleet> vect_ms = {ms1,ms1,ms1, ms2,ms2, ms2}; // 3 ms1, 3 ms2
vector<Fleet> vect_super_ms = {super_ms1,super_ms1, super_ms1, super_ms2,super_ms2, super_ms2}; // 3 sms1, 3 sms2
vector<Fleet> vect_large = { large1,large1,large1, large2,large2,large2,large3, large3,large3,large4,large4, large4, large5,large5, large5}; // 3 each

/*enum class AirCraft
{
    A = 0, B, C , D, E, F, G, H, I , J , K
};*/

template<typename T>
void removeCabinFromStock(vector<Fleet> vect, T object)
{
    vect.erase(std::remove(vect.begin(), vect.end(), object), vect.end());
}

void displayTotalM(Monthly* ptr[], char answer)
{
    
    switch(answer){
        case 'A':
            cout << ptr[0]->getTotal();
        case 'B':
            cout << ptr[1]->getTotal();
            //removeCabinFromStock(vect_lb, lb2);
        case 'C':
            cout << ptr[2]->getTotal();
            //removeCabinFromStock(vect_ms, ms1);
        case 'D':
            cout << ptr[3]->getTotal();
            //removeCabinFromStock(vect_ms, ms2);
        case 'E':
            cout << ptr[4]->getTotal();
            //removeCabinFromStock(vect_super_ms, super_ms1);
        case 'F':
            cout << ptr[5]->getTotal();
            //removeCabinFromStock(vect_super_ms, super_ms2);
        case 'G':
            cout << ptr[6]->getTotal();
            //removeCabinFromStock(vect_large, large1);
        case 'H':
            cout << ptr[7]->getTotal();
            //removeCabinFromStock(vect_large, large2);
        case 'I':
            cout << ptr[8]->getTotal();
            //removeCabinFromStock(vect_large, large3);
        case 'J':
            cout << ptr[9]->getTotal();
            //removeCabinFromStock(vect_large, large4);
        case 'K':
            cout << ptr[10]->getTotal();
            //removeCabinFromStock(vect_large, large5);

    }}
void displayTotalA(Acquisition *ptr[], char answer)
{
    
    switch(answer){
        case 'A':
            cout << ptr[0]->getTotal();
            //removeCabinFromStock(vect_lb, lb1);
        case 'B':
            cout << ptr[1]->getTotal();
            //removeCabinFromStock(vect_lb, lb2);
        case 'C':
            cout << ptr[2]->getTotal();
            //removeCabinFromStock(vect_ms, ms1);
        case 'D':
            cout << ptr[3]->getTotal();
            //removeCabinFromStock(vect_ms, ms2);
        case 'E':
            cout << ptr[4]->getTotal();
            //removeCabinFromStock(vect_super_ms, super_ms1);
        case 'F':
            cout << ptr[5]->getTotal();
            //removeCabinFromStock(vect_super_ms, super_ms2);
        case 'G':
            cout << ptr[6]->getTotal();
            //removeCabinFromStock(vect_large, large1);
        case 'H':
            cout << ptr[7]->getTotal();
            //removeCabinFromStock(vect_large, large2);
        case 'I':
            cout << ptr[8]->getTotal();
            //removeCabinFromStock(vect_large, large3);
        case 'J':
            cout << ptr[9]->getTotal();
            //removeCabinFromStock(vect_large, large4);
        case 'K':
            cout << ptr[10]->getTotal();
            //removeCabinFromStock(vect_large, large5);

    }
}


/*void myfunction(Monthly* ptr)
{
    cout << "Passing pointer by reference or moving it\n";
}*/
    
void customerDisplayFleet(char fleet_choice)
{
    switch(fleet_choice)
    {
        case 'A' : cout << lb1.toString();
        case 'B' : cout << lb2.toString();
        case 'C' : cout << ms1.toString();
        case 'D' : cout << ms2.toString();
        case 'E' : cout << super_ms1.toString();
        case 'F' : cout << super_ms2.toString();
        case 'G' : cout << large1.toString();
        case 'H' : cout << large2.toString();
        case 'I' : cout << large3.toString();
        case 'J' : cout << large4.toString();
        case 'K' : cout << large5.toString();
        
    }
}
    
int main(){
    
    /*string light_cabin_commodations = "Light Cabin Commodations";
    string mid_size_commodations = "Mid-size Comodations";
    string super_size_commodations = "Super-size commodations";
    string large_commodation = "Large commodations";
    // Two kinds of light cabins
    LightCabin lb1("Embraer Phenom 300", 6, "4 hours", 74, 51, 17.2, 4.9, 495,light_cabin_commodations);
    LightCabin lb2("Cessna Citation XLS", 7, "4:15 hours",79,5.5,18.6, 5.7,495,light_cabin_commodations);
    
    // Two kinds of mid-size cabin
    MidSize ms1("Cessna Citation Sovereign", 8, "7:15 hours", 100,5.5,24.2,5.7, 495, mid_size_commodations);
    MidSize ms2("Ciatation Latitude",7,"7 hours", 100, 6.4,21.75, 61, 495, mid_size_commodations);
    
    // Two kinds of super midsize cabin
    SuperMidSize super_ms1("Bombardier Challenger 350", 9, "7:45 hours", 106, 7.17,28.6,6,540,super_size_commodations);
    SuperMidSize super_ms2("Cessna Citation Longitude", 8, "7:45 hours", 112, 6.42, 28.83,6, 547, super_size_commodations);
    
    // Five kinds of large size of  cabin
    Large large1("Bombardier Challenger 650",11, "8:45 hours", 115, 7.92, 28.4,6,540,large_commodation);
    Large large2("GulfStream G450",14, "9:45 hours", 169, 7,45.1,6,547,large_commodation);
    Large large3("Bombardier Global 5000",13,"11:45 hours",195, 7.92,45.5,6.17,560,large_commodation);
    Large large4("Bombardier Global 6000", 13, "13:30 hours", 195,7.92,48.1,6.17,560,large_commodation);
    Large large5("Bombardier Global 7500", 14,"16 hours", 195, 8, 59.6, 6.17,593, large_commodation);*/
    
    // Stock of fleets
    /*vector<Fleet*> vect_lb = {move(lb1), move(lb1),move(lb1),move(lb2), move(lb2),move(lb2)};

    vector<Fleet*> vect_lb1 = {lb1, lb1,lb1,lb2, lb2,lb2};
    delete lb1;
    delete lb2;
    lb1 = nullptr;
    lb2 = nullptr;*/
    /*vector<Fleet> vect_lb = {lb1, lb1,lb1,lb2, lb2,lb2}; // 3 lb1, 3 lb2
    vector<Fleet> vect_ms = {ms1,ms1,ms1, ms2,ms2, ms2}; // 3 ms1, 3 ms2
    //vector<Fleet> vect_super_ms = {move(super_ms1), move(super_ms1), move(super_ms2), move(super_ms2)};
    vector<Fleet> vect_super_ms = {super_ms1,super_ms1, super_ms1, super_ms2,super_ms2, super_ms2}; // 3 sms1, 3 sms2
    //vector<Fleet> vect_large = { move(large1),  move(large1), move(large2), move(large2), move(large3), move(large3), move(large4),move(large4), move(large5), move(large5)};
    vector<Fleet> vect_large = { large1,large1,large1, large2,large2,large2,large3, large3,large3,large4,large4, large4, large5,large5, large5}; // 3 each*/

    cout << "\n\t";
    // Set payment package for Light Cabin
    auto ptr_card = make_unique<Monthly*[]>(11);
    ptr_card[0] = new Monthly(250,100); // Embraer Phenom 300
    ptr_card[1] = new Monthly(300,150); // Cessna Citation
    ptr_card[2] = new Monthly(350,200); // MS Sovereign
    ptr_card[3] = new Monthly(400,280); // MS Latitude
    ptr_card[4] = new Monthly(450,320); // SMS BC350
    ptr_card[5] = new Monthly(500,380); // SMS Longtitude
    ptr_card[6] = new Monthly(550,420,60);  // L BC650
    ptr_card[7] = new Monthly(600,500,70);  //
    ptr_card[8] = new Monthly(650,550,50);
    ptr_card[9] = new Monthly(700,600,50);
    ptr_card[10] = new Monthly(750,650,100);
    
    // Card info
    //Card card_info;
    //cout << card_info.toString();
    //Lease lease_info;
    
    //Array 2 dimension
    
    
    cout << "\n\t";
    auto ptr_lease = make_unique<Monthly*[]>(11);
    ptr_lease[0] = new Monthly(500,200); // Embraer Phenom 300
    ptr_lease[1] = new Monthly(600,300); // Cessna Citation
    ptr_lease[2] = new Monthly(700,400); // MS Sovereign
    ptr_lease[3] = new Monthly(800,560); // MS Latitude
    ptr_lease[4] = new Monthly(900,640); // SMS BC350
    ptr_lease[5] = new Monthly(1000,760); // SMS Longtitude
    ptr_lease[6] = new Monthly(1100,840,120);  // L BC650
    ptr_lease[7] = new Monthly(1200,1000,140);  //
    ptr_lease[8] = new Monthly(1300,1100,100);
    ptr_lease[9] = new Monthly(1400,1200,100);
    ptr_lease[10] = new Monthly(1500,1300,200);
    
    cout << "\n\t";
    auto ptr_share = make_unique<Acquisition*[]>(11);
    ptr_share[0] = new Acquisition(4000,2500); // Embraer Phenom 300
    ptr_share[1] = new Acquisition(5000,3500); // Cessna Citation
    ptr_share[2] = new Acquisition(7000,4800); // MS Sovereign
    ptr_share[3] = new Acquisition(8500,5600);// MS Latitude
    ptr_share[4] = new Acquisition(9000,6200);// SMS BC350
    ptr_share[5] = new Acquisition(10000,7300);// SMS Longtitude
    ptr_share[6] = new Acquisition(11000,7900);
    ptr_share[7] = new Acquisition(12000,8500);  //
    ptr_share[8] =new Acquisition(13000,9000);
    ptr_share[9] = new Acquisition(15000,10000);
    ptr_share[10] = new Acquisition(1600,10500);
    

    cout << "------------------Welcome to KIM's AIRCARFT------------------";
    cout << "\n\t\tHere are the  information about our Fleets:\n";
    cout << "LightCabin:\n\t";
    cout << "A: " << lb1.toString() << " \n\t B: " << lb2.toString();
    cout << "\nMidsize Cabin:\n\t" << "C: "<< ms1.toString() << "\n\tD: " << ms2.toString();
    cout << "\nSuper Midsize Cabin:\n\tE: " << super_ms1.toString() << "\n\tF: " << super_ms2.toString();
    cout << "\nLarge Cabin:\n\tG: " << large1.toString() << "\n\tH: " << large2.toString() << "\n\tI: " <<  large3.toString() << "\n\tJ: " << large4.toString() << "\n\tK: " << large5.toString() << endl;
    
    // Creating card, lease and share info
    Card card_info;
    Lease lease_info;
    Share share_info;
    //cout << "Payment Option:\n";
    //cout << setw(5) << card_info.toString() << endl;
    //cout << setw(5) << lease_info.toString() << endl;
    //cout << setw(5) << share_info.toString() << endl;
    
    // Collect their data
    // Creating file to append to exist file or create new file when it havenot existed
    fstream file;
    file.open("kimtrinh.txt", ios::out | ios::app);
    
    // Reading input from user and  write it out to the text file
    string fullname, phoneNumber, address, email;
    cout << "Please enter your legal full name: ";
    getline(cin,fullname);
    file << fullname;
    cout << "Phone number: ";
    getline(cin, phoneNumber);
    cout << "Email address: ";
    cin >> email;
    file << email;
    file << phoneNumber;
    cout << "Address: ";
    cin >> address;
    file << address;
    // Close the file
    file.close();
    
    
    // Let user enter their choice
    char aircarft;
    char answer;    // yes or no for fly more than 50 hours per year
    cout << "Choose your desired aircarft: ";
    cin >> aircarft;
    cout << "Do you fly more than 50 hours per year?";
    cin >> answer;
    int choose_payment;
    if (answer == 'Y' || answer == 'y') {
        cout << "Do you want to pay acquisition (once and done) or monthly payment? Enter 1 for acquisition and 2 for monthly payment: ";
        cin >> choose_payment;
        if (choose_payment== 1) {
            cout << "Here is the recommended payment package for you:\n";
            cout << setw(5) << share_info.toString() << endl;
        }
        else if (choose_payment ==2){
            cout << "Here is the recommended payment package for you:\n";
            cout << setw(5) << lease_info.toString() << endl;
        }
    }
    else {
        cout << "Here is the recommended payment package for you:\n";
        cout << setw(5) << card_info.toString() << endl;
    }
    int payment_choice;
    cout << "Enter number to confirm your choice( 1 for Share, 2 for Lease, 3 for Card): ";
    cin >> payment_choice;
    
    
    cout << "--------------------Invoice--------------------";
    cout << "-----Customer information-----";
    cout << fullname << "\n" << phoneNumber << "\n" << email << "\n" << address;
    customerDisplayFleet(answer);
    if(payment_choice == 1){
        cout << card_info.toString();
        displayTotalA(ptr_share.get(), aircarft);
    }
        
    else if(payment_choice == 2){
        displayTotalM(ptr_lease.get(), aircarft);
        cout << lease_info.toString();
    }
    else {
        displayTotalM(ptr_card.get(), aircarft);
        card_info.toString();
    }
    
    
    
    
    
    
   
        
    
    
    
    
    
    
    
    
    
    
    
    
    
  

    
   
    
    
    
   
    
    
    return 0;
}



/*LightCabin *lb2,*ms1, *ms2, *super_ms1,*super_ms2,*large1,*large2, *large3, *large4, *large5 = nullptr;
LightCabin *lb1 = new LightCabin[2];
lb1 = {new LightCabin("Embraer Phenom300", 6, "4 hours", 74, 51, 17.2, 4.9, 495,light_cabin_commodations),
    new LightCabin("Cessna Citation XLS", 7, "4:15 hours",79,5.5,18.6, 5.7,495,light_cabin_commodations)};*/



/*Fleet& fleet1 =lb1;     // demonstrate OOP polymorphism
Fleet& fleet2 = lb2;
auto ptr_lb = make_unique<Fleet[]>(2);
auto ptr1 = make_unique<Fleet>();*/
// Using move method
/*LightCabin lb3(std::move(lb2));
cout << lb3.toString();
LightCabin lb4(move(lb1));
cout << lb4.toString();
cout << ms1.getNum_Fleet() << endl;*/


/*LightCabin lb("Phenom300", 7, 13.6, 79, 35.0, 40.0, 65.0, 27.0,light_cabin_commodations);
cout << "Here are the info if light cabin 1\n";
cout << lb.toString();
cout << endl;

cout << "Here are the info of the cabin 1 which is assign to reference of fleet:\n";
Fleet& fleet1 =lb;
cout << fleet1.toString();      // Demonstrate polymorphism

MidSize midsize("Citation Latitue", 8, 14.8, 87, 32.0, 44.0, 50.0, 72.0, mid_size_commodations);
cout << midsize.toString();

cout << "We create ";
cout << midsize.getNum_Fleet() << " fleets so far.\n";*/
