#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string partyName;
    int guests, slicesPerGuest;
    double pricePerPizza;

    cout << "Party name: ";
    getline(cin, partyName);
    cout << "Number of guests: "; cin >> guests;
    cout << "Slices per guest: "; cin >> slicesPerGuest;
    cout << "Price per pizza: $"; cin >> pricePerPizza;

    int slicesNeeded = guests * slicesPerGuest;
    int pizzas = (slicesNeeded + 7) / 8; //
    double subtotal = pizzas * pricePerPizza;
    double total = subtotal * 1.05;

    cout << "============================\n"
         << "PIZZA PARTY PLANNER\n"
         << "============================\n"
         << "Party: " << partyName << "\n"
         << "Guests: " << guests << "\n"
         << "Slices needed: " << slicesNeeded << "\n"
         << "Pizzas to order: " << pizzas << "\n"
         << "----------------------------\n"
         << fixed << setprecision(2) << left
         << setw(18) << "Subtotal:" << "$" << subtotal << "\n"
         << setw(18) << "GST (5%):" << "$" << subtotal * 0.05 << "\n"
         << setw(18) << "Total:"    << "$" << total << "\n"
         << setw(18) << "Per guest:" << "$" << total / guests << "\n"
         << "============================\n";
}
