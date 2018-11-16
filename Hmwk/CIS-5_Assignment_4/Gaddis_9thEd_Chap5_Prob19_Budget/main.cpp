/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate the total expenses the user has for
 * the month and determine whether the total is over or under
 * the user's set budget.
 * Created on October 18, 2018, 5:30 PM
 */

//System Library
#include <iostream>         //I/O Library

using namespace std;

//User Libraries

//Global Constants Only. No Global Variables
//Like PI, e, gravity, or conversions

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables
    float budget;       //set budget for the month
    float expense;
    float total;     //total expenses for the month
    
    //Input or Initialize Values
    cout << "This program will determine whether or not\n";
    cout << "your expenses exceed your budget for the month.\n\n";
    cout << "Enter your budget: $";
    cin >> budget;
    cout << "\nNext, you will enter your expenses for the month.\n";
    cout << "Once you are done entering expenses, Enter the number 0.\n";
    cout << "Enter an expense: $";
    cin >> expense;
    
    //Process/Calculations Here
    if (expense < 0)
    {
        cout << "Error. Enter a positive value to continue\n";
        cout << "Enter expense: $";
        cin >> expense;
    }
    total = 0;      //total initialized with 0
    while (expense > 0)
    {
        total += expense;
        cout << "\nEnter another expense OR\n";
        cout << "enter the number 0 to end: $";
        cin >> expense;
        if (expense == 0)
        {
            cout << "Your total expenses equal $" << total << endl;
            
            if (total <= budget)
            {
                cout << "Congratulations. You were able to\n";
                cout << "remain on budget this month. keep it up.";
            }
            else
            {
                cout << "Sorry. you were not able to stay on\n";
                cout << "budget this month. Better luck next month.";
            }
        }
    }
    

    return 0;
}

