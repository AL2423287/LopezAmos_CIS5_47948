/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the weight of an object
 * using mass
 *
 * Created on September 29, 2018, 9:13 PM
 */

#include <iostream> //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variable Here
    float mass;        //Weight is in kilograms
    float weight;      //Weight is displayed in newtons
    
    //Input or Initialize Values Here
    cout << "I will calculate the weight of an object.\n";
    cout << "Enter the mass of the object\n";
    cout << "in kilograms: ";
    cin >> mass;
    
    //Process Here
    weight = mass * 9.8;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (weight > 1000)
    {
        cout << "The weight of the object is " << weight << " newtons.\n";
        cout << "The object is too heavy.";
    }
    else if (weight < 10)
    {
        cout << "The weight of the object is " << weight << " newtons.\n";
        cout << "The object is too light.";
    }
    else
        cout << "The object has a weight of " << weight << " newtons.";

    return 0;
}

