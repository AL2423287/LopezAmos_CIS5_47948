/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate the body mass index of the user and display to the user
 * if they are at optimal weight or not
 *
 * Created on September 28, 2018, 11:07 PM
 */

#include <iostream> //I/O Library
#include <cmath>    //math functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables Here
    float weight;      //weight in pounds
    float height;      //height in inches
    float BMI;          //body mass index
    
    //Input or Initialize Values Here
    cout << "I will determine your body mass index or (BMI).\n";
    cout << "please enter your weight in pounds: ";
    cin >> weight;
    cout << "Please enter your height in inches: ";
    cin >> height;
    
    //Process Here
    BMI = weight * 703 / (pow(height, 2.0));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if ((BMI <= 25) && (BMI >= 18.5))
    {
        cout << "Your BMI is " << BMI << endl;
        cout << "You are at optimal weight.";
    }
    else if (BMI >25)
    {
        cout << "Your BMI is " << BMI << endl;
        cout << "You are overweight.";
    }
    else
    {
        cout << "Your BMI is " << BMI << endl;
        cout << "You are underweight.";
    }

    return 0;
}

