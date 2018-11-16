/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the average rainfall for 3 months
 * Created on September 17, 2018, 6:35 PM
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    double month1Rain, month2Rain, month3Rain;  //rainfall in inches
    double Average;
    string month1, month2, month3;
    
    //Process
    cout << "Please provide the rainfall for three consecutive months.\n";
    cout << "The rainfall must be in inches.\n";
    cout << "Enter the name of month 1: ";
    cin >> month1;
    cout << "Enter the rainfall for month 1: ";
    cin >> month1Rain;
    cout << "Enter the name of month 2: ";
    cin >> month2;
    cout << "Enter the rainfall for month 2: ";
    cin >> month2Rain;
    cout << "Enter the name of month 3: ";
    cin >> month3;
    cout << "Enter the rainfall for month 3: ";
    cin >> month3Rain;
    
    Average = (month1Rain + month2Rain + month3Rain) / 3;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The average rainfall for\n";
    cout << month1 << ", " << month2 << ", and " << month3 <<endl;
    cout << "is " << Average << " inches." <<endl;

    return 0;
}

