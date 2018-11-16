/* 
 * File:   main.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 5:31 PM
 * Purpose: to calculate the amount paid for a stock purchase and commission
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    float stockPrice, numberOfShares, prcntCommission;
    float commissionPaid, subTotal, total;
    
    stockPrice = 35.00;
    numberOfShares = 750;
    prcntCommission = 0.02;
    
    subTotal = stockPrice * numberOfShares;
    commissionPaid = prcntCommission * subTotal;
    total = subTotal + commissionPaid;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The stock purchase transaction is shown below.\n";
    cout << "Cost of stock shares bought:\n";
    cout << "$" << subTotal<< endl;
    cout << "Commission owed to stockbroker:\n";
    cout << "$" << commissionPaid << endl;
    cout << "Total cost of the stock purchase:\n";
    cout << "$" << total << endl;

    return 0;
}

