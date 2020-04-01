// V. Rivera Casanova
// CSCE 121
// Yhang 512
// 1/21/2020

#include <iostream>
using namespace std;

int main() {
    // variables for change and input amount
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    // placeholder for remaining change needed
    int remaining = 0;

    int dollars = 0;
    int cents = 0;

    // input from user
    cout << "Enter dollars: ";
    cin >> dollars;

    cout << "Enter cents: ";
    cin >> cents;

    // gets quarters for dollars
    // makes sure dollars is non-zero
    if (dollars != 0) {
        quarters = dollars * 4;
    }

    // gets coins using modulo and division
    // makes sure cents is non-zero
    if (cents != 0) {
        quarters += cents / 25;
        remaining = cents % 25;

        dimes = remaining / 10;
        remaining %= 10;

        nickels = remaining / 5;
        remaining %= 5;

        pennies = remaining;
    }

    // printing out results
    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    cout << endl;
    cout << "Total coins used: " << quarters + dimes + nickels + pennies << endl;

    return 0;
}
