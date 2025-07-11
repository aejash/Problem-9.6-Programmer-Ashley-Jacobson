/**** Problem 9.6 - Chapter 9, Project B
*---------------------------------------------
***** Reimplement the CashRegister class so that it keeps track of the price of each
***** added item in a vector<double>. Remove the item_count and total_price data members.
***** Reimplement the clear, add_item, get_total, and get_count member functions.
***** Add a member function display_all that displays the prices of all items in the current sale.
*---------------------------------------------
// Programmer - Ashley Jacobson
// Tester - Giannfranco Brance
*---------------------------------------------
// Group Project B //
/***** Members *****/
/***** Ashley Jacobson *****/
/***** Giannfranco Brance *****/
/***** Audrey Tapia *****/
/***** Heily Cabrera Guerrero *****/

#include "CashRegister.h"
#include <iostream>
using namespace std;
int main()
{
    CashRegister register1;
    cout << "Clearing out register1..." << endl;
    register1.clear();
    cout << "Adding item to register1..." << endl;
    register1.add_item(1.95);

    cout << "Displaying Register..." << endl;
    register1.display_all();

    cout << "Adding item to register1..." << endl;
    register1.add_item(0.95);
    cout << "Displaying Register..." << endl;
    register1.display_all();

    cout << "Adding item to register1..." << endl;
    register1.add_item(2.50);
    cout << "Displaying Register..." << endl;
    register1.display_all();
    return 0;
}
