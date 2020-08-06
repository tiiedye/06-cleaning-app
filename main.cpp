#include <iostream>

using namespace std;

int main() {
    int numOfSmRooms {0};
    int numOfLgRooms {0};

    const double pricePerSmRoom {25.00};
    const double pricePerLgRoom {35.00};
    const double salesTax {0.06};

    // days
    const int estExp {30}; 

    cout << "Hello, welcome to Fancies's Carept Cleaning Service." << endl << endl;
    
    cout << "How many SMALL rooms would you like cleaned? ";
    cin >> numOfSmRooms;

    cout << "How many LARGE rooms would you like cleaned? ";
    cin >> numOfLgRooms;

    cout << "\nEsimate for carpet cleaning service" << endl;

    cout << "Number of SMALL rooms: " << numOfSmRooms << endl;
    cout << "Number of LARGE rooms: " << numOfLgRooms << endl;
    cout << endl;

    cout << "Price per SMALL room: $" << pricePerSmRoom << endl;
    cout << "Price per LARGE room: $" << pricePerLgRoom << endl;
    cout << endl;

    cout << "Cost: $" << (pricePerSmRoom * numOfSmRooms) + (pricePerLgRoom + numOfLgRooms) << endl;
    cout << "Tax: $" << ((pricePerSmRoom * numOfSmRooms) + (pricePerLgRoom + numOfLgRooms)) * salesTax << endl;
    cout << "=======================" << endl;
    cout << "Total estimate: $" << ((pricePerSmRoom * numOfSmRooms) + (pricePerLgRoom + numOfLgRooms)) + (((pricePerSmRoom * numOfSmRooms) + (pricePerLgRoom + numOfLgRooms)) * salesTax) << endl;
    cout << "\nThis estimae is valid for " << estExp << " days." << endl;

    cout << endl;

        return 0;
}