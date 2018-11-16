/* 
 * File:   OceanLevel.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 1:15 PM
 * Purpose: to calculate the rise of ocean levels at
 * multiple points in the future
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    double rate;
    double yearLevel, year2Level, year3Level;
    int year, year2, year3;
    
    //initial Variable
    rate = 1.5;         //rate at which sea level rises per year in millimeters
    year = 5;
    year2 = 7;          //number of years from now
    year3 = 10;
    
    //Process
    yearLevel = rate * year;
    year2Level = rate * year2;
    year3Level = rate * year3;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "In " << year << " years, the ocean level\n";
    cout << "will be " << yearLevel << "mm higher than now.\n";
    cout << endl;
    cout << "In " << year2 << " years, the ocean level\n";
    cout << "will be " << year2Level << "mm higher than now.\n";
    cout << endl;
    cout << "In " << year3 << " years, the ocean level\n";
    cout << "will be " << year3Level << "mm higher than now.\n";
    cout << endl;
    cout << "Something must be done to stop rising\n";
    cout << "ocean levels before it's too late.\n";

    return 0;
}

