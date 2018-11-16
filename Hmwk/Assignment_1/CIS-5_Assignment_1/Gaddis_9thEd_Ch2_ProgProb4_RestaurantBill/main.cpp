/* 
 * File:   RestaurantBill.cpp
 * Author: Amos Lopez
 *
 * Created on September 8, 2018, 2:53 AM
 * Purpose: to compute the tax and tip on a bill
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

    //Declare Variable
    double mealCharge, taxPercent, taxPaid, tipPercent, tipPaid, totBill;
    
    //Initial Variable
    mealCharge = 88.67;
    taxPercent = 0.0675;
    tipPercent = 0.2;
    
    //Process
    taxPaid = mealCharge * taxPercent;
    tipPaid = tipPercent * (taxPaid + mealCharge);
    totBill = mealCharge + taxPaid + tipPaid;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Here is your total biil.\n";
    cout << "Please pay at the front of the restaurant\n";
    cout << "and have a wonderful day.\n";
    cout << "Meal: $" << mealCharge <<endl;
    cout << "Tax: $" << taxPaid <<endl;
    cout << "Tip: $" << tipPaid <<endl;
    cout << "Total Bill: $" << totBill <<endl;
    
    return 0;
}

