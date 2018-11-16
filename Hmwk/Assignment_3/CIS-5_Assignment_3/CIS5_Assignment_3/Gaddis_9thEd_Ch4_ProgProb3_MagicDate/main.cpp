/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Determine if a numeric date is magic by multiplying
 * the month and day to equal the year.
 *
 * Created on September 28, 2018, 7:50 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Variable
    int day, month, year;
    
    //Map
    cout << "I will determine if a date is magic.\n";
    cout << "Please enter a day in numeric form: ";
    cin >> day;
    cout << "Please enter a month in numeric form: ";
    cin >> month;
    cout << "Please enter a two-digit year: ";
    cin >> year;
    
    //Process
    if ((day * month) == year)
        cout << "This date is magic.";
    else
        cout << "This date is not magic.";

    return 0;
}

