/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Convert and Display the conversions from Celsius
 * temperatures to Fahrenheit.
 * Created on October 18, 2018, 10:51 PM
 */

//System Libraries
#include <iostream>         //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, NO Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables
    float tempF;       //Temperature in Fahrenheit
    float tempC = 0;          //Temperature in Celsius and loop counter
    
    //Process/Calculations Here
    cout << "This Program will convert Celsius temperatures 0-20\n";
    cout << "to Fahrenheit and display a table of them.\n\n";
    cout << "Celsius Temp.      Fahrenheit Temp.\n";
    cout << "-----------------------------------------\n";
    for (tempC = 0; tempC <= 20; tempC++)
    {
        //convert Celsius to Fahrenheit
        tempF = ((tempC * 9.0)/5.0) + 32;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << tempC << "\t\t\t" << tempF << endl;
    }

    return 0;
}

