/* 
 * File:   AnnualPay.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 12:39 PM
 * Purpose: to calculate an employee's annual pay.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    int payPeriods;
    double payAmount, annualPay;
    
    //Initial Variable
    payAmount = 2200.0;
    payPeriods = 26;
    
    //Process
    annualPay = payAmount * payPeriods;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The employee's annual pay will be $" << annualPay <<endl;

    return 0;
}

