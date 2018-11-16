/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: calculate and compare the percentage gas tax on a gallon of gas
 * and the dollar amount of profit made from the gallon of gas
 *
 * Created on September 26, 2018, 1:58 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Constant
    const double exciseTax = 0.39;   //excise tax per gallon
    const double saleTax = 0.08;    //percent sales tax
    const double fee = 0.10;        //cap and trade fee in cents
    const double fedTax = 0.184;    //federal tax in cents
    const double oilPrcnt = 0.065; //percent oil company profit
    
    //Variable
    double totTax;                  //total tax amount paid to government
    double priceGas;
    double oilProfit ;             //profit amount paid to gas company
    
    //Map
    cout << "Please enter the price of gas\n";
    cout << "you paid per gallon: $";
    cin >> priceGas;
    
    totTax = exciseTax + fedTax + fee + (saleTax * priceGas);
    oilProfit = oilPrcnt * priceGas;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The total amount of taxes\n";
    cout << "paid to the government is $" << totTax << endl;
    cout << "The dollar profit amount paid to\n";
    cout << "the gas company is $" << oilProfit << endl;

    return 0;
}

