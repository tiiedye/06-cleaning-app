#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Fancies's Carept Cleaning Service." << endl << endl;
    cout << "How many rooms would you like cleaned? ";

    int numberOfRooms {0};
    cin >> numberOfRooms;

    cout << "\nEsimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room: $" << 30 << endl;
    cout << "Cost: $" << 30 * numberOfRooms << endl;
    cout << "Tax: $" << 30 * numberOfRooms * 0.06 << endl;
    cout << "=======================" << endl;
    cout << "Total estimate: $" << (30 * numberOfRooms) + (30 * numberOfRooms * 0.06) << endl;
    cout << "\nThis estimae is valid for " << 30 << " days." << endl;

    cout << endl;
    return 0;
}