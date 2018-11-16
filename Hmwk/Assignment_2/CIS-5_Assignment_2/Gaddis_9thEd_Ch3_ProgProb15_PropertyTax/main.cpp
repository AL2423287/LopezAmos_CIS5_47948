/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display assessment value and property tax
 * on a piece of property
 * Created on September 18, 2018, 5:03 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    double propertyValue;
    double assessment = 0.60; //assessment percentage of actual value
    double assessmentValue;
    double propertyTax = 0.75; //cents owed per hundred dollars of assessment
    double taxPaid;
    
    //Map
    cout << "Enter actual value of property: $";
    cin >> propertyValue;
    
    assessmentValue = propertyValue * assessment;
    taxPaid = (assessmentValue / 100) * propertyTax;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display
    cout << "Property Value: $" << propertyValue << endl;
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << taxPaid << endl;

    return 0;
}

