/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display currency exchange rate between
 * dollars, euros, and yen
 * Created on September 18, 2018, 4:16 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    double dollars, euros, yen;
    const double YEN_PER_DOLLAR = 112.34; //current exchange rate dollar-to-yen
    const double EUROS_PER_DOLLAR = 0.86;//current exchange rate dollar-to-euro
    
    //Map
    cout << "The amount of dollars will be converted to both\n";
    cout << "yen and euros.\n";
    cout << "Enter amount of U.S. dollars: ";
    cin >> dollars;
    
    euros = dollars * EUROS_PER_DOLLAR;
    yen = dollars * YEN_PER_DOLLAR;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display
    cout << dollars << " dollars = " << euros << " euros.\n";
    cout << dollars << " dollars = " << yen << " yen.\n";

    return 0;
}

