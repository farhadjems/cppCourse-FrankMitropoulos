#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
    const int dollarExchange = 100;
    const int quarterExchange = 25;
    const int dimeExchange = 10;
    const int nickelExchange = 5;

    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int cents = 0;

    cout << " enter the amount of cents: ";
    cin >> cents;

    // Number of dollars
    dollars = cents / dollarExchange;
    cents %= dollarExchange;

    // Number of quarters
    quarters = cents / quarterExchange;
    cents %= quarterExchange;

    // Number of dimes
    dimes = cents / dimeExchange;
    cents %= dimeExchange;

    // Number of nickels
    nickels = cents / nickelExchange;
    cents %= nickelExchange;

    cout << " Number of Dollars: " << dollars << endl;
    cout << " Number of quarters: " << quarters << endl;
    cout << " Number of dimes: " << dimes << endl;
    cout << " Number of nickels: " << nickels << endl;
    cout << " Number of cents: " << cents << endl;
}