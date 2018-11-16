/* 
 * File:   SalesTax.cpp
 * Author: Amos Lopez
 * Created on September 8, 2018, 2:27 AM
 * Purpose: To compute the total sales tax of a purchase
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

    //Declare Variable
    double itemPrice, stateTax, countyTax, totTaxes, totTaxPaid;
    
    //Initial Variable
    itemPrice = 95.00;
    stateTax = 0.04;
    countyTax = 0.02;
    
    //Process
    totTaxes = stateTax + countyTax;
    totTaxPaid = itemPrice * totTaxes;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The price of the item is $" << itemPrice <<endl;
    cout << "The total tax paid on\n";
    cout << "the item is $" << totTaxPaid <<endl;
    
    return 0;
}

