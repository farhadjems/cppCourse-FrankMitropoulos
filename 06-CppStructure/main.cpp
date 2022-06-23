#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
    cout << " hello, welcome to Frank's Carpet Cleaning Service\n\n";

    int smallRooms = 0;
    const double smallRoomCost = 25.0;
    int largeRooms = 0;
    const double largeRoomCost = 35.0;

    cout << " How mant small rooms would you like cleaned? ";
    cin >> smallRooms;
    cout << " How mant large rooms would you like cleaned? ";
    cin >> largeRooms;

    double price = smallRoomCost * smallRooms + largeRoomCost * largeRooms;
    const double tax = 0.06 * price;
    const double totalCost = price + tax;

    cout << "\n Estimate for carpet cleaning service\n";
    cout << " Number of small rooms: " << smallRooms << endl;
    cout << " Number of large rooms: " << largeRooms << endl;
    cout << " Price per small room: $" << smallRoomCost << endl;
    cout << " Price per large room: $" << largeRoomCost << endl;
    cout << " Cost: $" << price << endl;
    cout << " Tax: $" << tax << endl;
    cout << "==========================================\n";
    cout << " Total estimate: $" << totalCost << endl;
    cout << " This estimate is valid for 30 days\n\n";
}