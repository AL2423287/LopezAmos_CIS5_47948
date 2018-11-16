/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: To get a positive integer from the user and find the 
 * total sum
 * Created on October 17, 2018, 12:58 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    unsigned int counter = 0;    //counter for loop
    unsigned int total;                  //accumulator to hold sum total
    unsigned int number;
    
    //Input/Calculation Here
    cout << "This program will find the sum total\n";
    cout << "of a series of numbers.\n";
    cout << "Please enter a positive number between 0 and 1000: ";
    cin >> number;
    
    //Process/Calculation here
    if (number < 0 || number > 1000)
    {
        cout << "Error. Please enter a number between 0 and 100.";
    }
    else
    {
        while (counter <= number)
        {
            total += counter;
            counter++;
        }
        cout << "The sum total of numbers up to " << number << endl;
        cout << "is " << total;
    }
    return 0;
}

