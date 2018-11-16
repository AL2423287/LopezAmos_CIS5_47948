/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the weight of an object
 * using mass
 *
 * Created on September 29, 2018, 9:13 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Variable
    double mass;        //Weight is in kilograms
    double weight;      //Weight is displayed in newtons
    
    //Map
    cout << "I will calculate the weight of an object.\n";
    cout << "Enter the mass of the object\n";
    cout << "in kilograms: ";
    cin >> mass;
    
    //Process
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

