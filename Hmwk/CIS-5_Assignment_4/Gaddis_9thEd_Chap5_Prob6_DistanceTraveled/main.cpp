/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Loop and Display the number of miles traveled by a vehicle
 * for each hour traveled.
 * Created on October 18, 2018, 12:25 AM
 */

//System Libraries Here
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
    int distance;         //total distance traveled
    int time;           //hours traveled
    int speed;            //speed traveled in miles per hour
    int count = 1;          //loop counter initialized with 1
    
    //Input or Initialize Values Here
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;
    
    //Process/Calculations Here
    cout << "Hour       Distance Traveled\n";
    cout << "------------------------------\n";
    if (speed < 0 || time < 1)
    {
        cout << "Error. Either one or both values entered are invalid.\n";
        cout << "Please restart program and enter a valid entry.";
    }
    else
    {
        while (count <= time)
        {
            distance += speed;
            cout << count << "\t\t" << distance << endl;
            count++;
        }
    }

    return 0;
}

