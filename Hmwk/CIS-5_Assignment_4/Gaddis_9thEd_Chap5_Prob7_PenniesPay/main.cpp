/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the dollar amount owed after
 * a number of days.
 * Created on October 18, 2018, 1:03 AM
 */

//System Library
#include <iostream>         //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    double salary= 0.01;     //salary per day initialized with $0.01
    double total = 0.0;      //accumulator initialized with 0
    int numDay;             //number of days to be paid
    int day = 1;          //loop counter
    
    //Input Here
    cout << "You will be paid a salary of one cent on the first day.\n";
    cout << "The salary will be doubled each day.\n";
    cout << "Please enter a number of days: ";
    cin >> numDay;
    
    //Process/Calculations Here
    while (numDay < 1)
    {
        cout << "Error. Invalid Entry. Please Enter a valid\n";
        cout << "number of days (1 or greater).\n";
        cout << "Enter a number of days: ";
        cin >> numDay;
        cout << endl;
    }
    cout << "Day        Salary\n";
    cout << "---------------------\n";
    while (day <= numDay)
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << day << "\t\t$" << salary << endl;
        total += salary;
        salary *= 2;
        day++;
    }

    return 0;
}

