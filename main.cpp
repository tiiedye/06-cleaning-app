#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Fancies's Carept Cleaning Service." << endl << endl;
    cout << "How many rooms would you like cleaned? ";

    int numberOfRooms {0};
    cin >> numberOfRooms;

    const double pricePerRoom {30.00};
    const double salesTax {0.06};

    // days
    const int estExp {30}; 

    cout << "\nEsimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room: $" << pricePerRoom << endl;
    cout << "Cost: $" << pricePerRoom * numberOfRooms << endl;
    cout << "Tax: $" << pricePerRoom * numberOfRooms * salesTax << endl;
    cout << "=======================" << endl;
    cout << "Total estimate: $" << (pricePerRoom * numberOfRooms) + (pricePerRoom * numberOfRooms * salesTax) << endl;
    cout << "\nThis estimae is valid for " << estExp << " days." << endl;

    cout << endl;
    return 0;
}