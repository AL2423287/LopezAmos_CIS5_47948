/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Loop and display projected rates for the next 6 years
 * Created on October 17, 2018, 8:15 PM
 */

//System Libraries Here
#include <iostream>     //I/O Library

using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    float fee = 2500;           //membership fee
    float rate = 0.04;                 //percentage increase of fee per year
    int numYear;                //number of years to display on table
    int count = 1;              //counter for loop
    
    //Input or Initialize Values Here
    cout << "Please enter a number of years for which\n";
    cout << "you would like to see the projected rates: ";
    cin >> numYear;
    cout << "Year       Membership Fee\n";
    cout << "---------------------------\n";
    
    //Process/Calculations Here
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (numYear <= 0)
    {
        cout << "Error. Please enter a positive value\n";
        cout << "for the number of years.";
    }
    else
    {
        while (count <= numYear)
        {
            fee += (fee * 0.04);
            cout << count << "\t\t$" << fee << endl;
            count++;
        }
    }

    return 0;
}

