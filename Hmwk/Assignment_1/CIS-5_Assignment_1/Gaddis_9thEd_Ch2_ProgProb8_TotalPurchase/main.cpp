/* 
 * File:   TotalPurchase.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 3:32 PM
 * Purpose: to compute the total purchase of multiple items and to display
 * the breakdown of the purchase to the user.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    double itemOne, itemTwo, itemThree, itemFour, itemFive;
    double subTotal, taxPaid, salesTax, total;
    
    itemOne = 15.95;
    itemTwo = 24.95;
    itemThree = 6.95;
    itemFour = 12.95;
    itemFive = 3.95;
    salesTax = 0.07;
    
    subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
    taxPaid = salesTax * subTotal;
    total = subTotal + taxPaid;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The total purchase is shown below.\n";
    cout << "Item 1: $" << itemOne << endl;
    cout << "Item 2: $" << itemTwo << endl;
    cout << "Item 3: $" << itemThree << endl;
    cout << "Item 4: $" << itemFour << endl;
    cout << "Item 5: $" << itemFive << endl;
    cout << "Subtotal: $" << subTotal << endl;
    cout << "Tax: $" << taxPaid << endl;
    cout << "Total: $" << total << endl;
    cout << endl;
    cout << "Thank you for shopping with us.\n";
    cout << "Have a wonderful day.\n";

    return 0;
}

