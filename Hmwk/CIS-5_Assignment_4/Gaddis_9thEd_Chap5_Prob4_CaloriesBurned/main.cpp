/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Loop and display the number of calories burned
 * at intervals of 5 minutes.
 * Created on October 17, 2018, 6:44 PM
 */

//System Libraries here
#include <iostream>     //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare variables Here
    float calBurn = 3.6;          //Calories burned per minute
    int minute = 5;          //Minutes passed initialized with 5
    float total = 0.0;     //Accumulator for calories burned, initialized with 0
    
    //Process/Calculations Here
    while (minute <= 30)
    {
        total += (calBurn * 5);
        cout << "The amount of calories burned at " << minute << endl;
        cout << "minutes are " << total << endl;
        minute += 5;
    }

    return 0;
}

