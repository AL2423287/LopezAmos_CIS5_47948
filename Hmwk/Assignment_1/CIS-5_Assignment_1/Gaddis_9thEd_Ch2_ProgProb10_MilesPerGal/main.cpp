/* 
 * File:   MilesPerGallon.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 4:49 PM
 * Purpose: to calculate how many miles per gallon that a car gets
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    float numOfGallons, milesDriven, milesPerGal;
    
    numOfGallons = 15;
    milesDriven = 375;
    
    milesPerGal = milesDriven/numOfGallons;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The car has a tank that holds " << numOfGallons << " gallons\n";
    cout << "and can drive " << milesDriven << " miles before refueling.\n";
    cout << "The car has " << milesPerGal << "mpg.\n";

    return 0;
}

