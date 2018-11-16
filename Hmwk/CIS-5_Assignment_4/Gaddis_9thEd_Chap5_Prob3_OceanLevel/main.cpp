/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Create a loop displaying a table of ocean levels
 * for the next 25 years
 * Created on October 17, 2018, 4:39 PM
 */

//System Libraries here
#include <iostream>     //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    float rise;         //millimeters that ocean levels rise per year;
    float level = 0;    //accumulator for ocean level after number of years
    int numYear;        //number of years to be displayed
    int count = 1;          //loop counter
    
    //Input/Calculation Here
    cout << "Please enter how many millimeters the\n";
    cout << "oceans levels rise per year: ";
    cin >> rise;
    cout << "Please enter how many years you wish\n";
    cout << "to see in the table: ";
    cin >> numYear;
    cout << endl;
    
    //Process/Calculations Here
    if (numYear < 0)
    {
        cout << "Error. Please enter a positive number of years.";
    }
    else
    {
        cout << "Year       Ocean Level Rise\n";
        cout << "----------------------------\n";
        while (count <= numYear)
        {
            level += rise;
            cout << count << "\t\t" << level << endl;
            count++;
        }
    }

    return 0;
}

