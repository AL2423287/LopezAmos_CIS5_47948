/* 
 * File:   main.cpp
 * Author: Amos Lopez
 *
 * Created on September 17, 2018, 12:45 PM
 * Purpose: Calculate the miles per gallon that a car can drive
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float milesDriven, Gallons, milesPerGallon;
    
    //Process
    cout << "How many miles can your car\n";
    cout << "drive on a full tank of gas:?\n";
    cout << "Enter miles: ";
    cin >> milesDriven;
    cout << "How many gallons of gas can\n";
    cout << "your tank hold?\n";
    cout << "Enter gallons: ";
    cin >> Gallons;
    milesPerGallon = milesDriven / Gallons;
    cout << "The car has " << milesPerGallon << " miles per gallon.\n";

    return 0;
}

