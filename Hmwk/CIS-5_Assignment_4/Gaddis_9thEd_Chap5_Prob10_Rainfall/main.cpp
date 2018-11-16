/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Use nested loops to collect data and calculate average rainfall
 * over a period of years
 * Created on October 18, 2018, 6:26 PM
 */

//System Libraries Here
#include <iostream>         //I/O Library

using namespace std;

//User Libraries

//Global Constants Only. No Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    int months = 12;                  //loop counter for month
    int year;                  //loop counter for years
    int numYear;                //number of years that user enters
    int numMonth;               //total number of months
    float average;
    float rainfall;             //rainfall in inches
    float total = 0;                //total rainfall
    int count;                //loop counter for months
    
    //Input or Initialize Here
    cout << "I will calculate the average rainfall\n";
    cout << "over a period of years.\n";
    cout << "\nEnter the number of years: ";
    cin >> numYear;
    numMonth = 12 * numYear;
    
    //Process/Calculations Here
    while(numYear < 1)
    {
        cout << "\nError. Enter a number of years of 1 or greater: ";
        cin >> numYear;
    }
    cout << "Enter the amount of rainfall (in inches)\n";
    cout << "for each month of the year.\n";
    
    total = 0;              //total rainfall accumulator initialized with 0
    
    //loop for years
    for(year = 1; year <= numYear; year++)
    {
        //loop for monthly rainfall
        for(count = 1; count <= 12; count++)
        {
            //Get rainfall for each month in the year
            cout << "Rainfall for Year " << year;
            cout << " Month " << count << ": ";
            cin >> rainfall;
            
            //rainfall entry error message
            if (rainfall < 0)
            {
                cout << "Error. Please enter a non-negative number\n";
                cout << "of inch rainfall: ";
                cin >> rainfall;
            }
            else
            {
               total += rainfall;
            }
        }
    }
    //Display Output
    
    average = total / numYear;
    cout << "\nThe total amount of rainfall for the entire period of\n";
    cout << numYear << " is " << total << " inches.\n";
    cout << "The total number of months is " << numMonth << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The total average of rainfall is " << average << " inches" << endl;

    return 0;
}

