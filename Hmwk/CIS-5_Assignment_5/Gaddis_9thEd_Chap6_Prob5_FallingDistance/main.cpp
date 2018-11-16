/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate falling distance of an object using main function
 * and fallingDistance function.
 * Created on November 11, 2018, 6:12 PM
 */

//Systerm Libraries
#include <iostream> //I/O Library
#include <cmath>    //math function Library
#include <iomanip>  //Ouput format Library

using namespace std;
//User Libraries

//Global Constants
double g=9.8; //constant for Gravity

//Function Prototypes
double fallingDistance(int);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    int time;   //holds amount of seconds that object has fallen
    double distance;    //holds distance that object has fallen
    
    //Input of Initialize
    cout<<"I will determine the falling distance of an object.\n\n";
    for(time=1;time<=10;time++)
    {
        distance=fallingDistance(time);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"The falling distance of the object after ";
        cout<<time<<" second(s) is "<<distance<<" meters.\n";
    }
    
    return 0;
}

//Calculates falling Distance and returns it to main.
double fallingDistance(int seconds)
{
    double fallDist;    //holds value for falling distance
    
    fallDist=0.5*g*(pow(2.0,seconds));
    
    return fallDist;
}