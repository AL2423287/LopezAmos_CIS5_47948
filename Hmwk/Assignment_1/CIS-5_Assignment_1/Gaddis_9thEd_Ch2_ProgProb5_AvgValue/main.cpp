/* 
 * File:   AverageOfValues.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 11:42 AM
 * Purpose: to add up the different values and find the average
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    int variableOne, variableTwo, variableThree;
    int variableFour, variableFive, numOfVariable;
    double average, sum;
    
    //Initial Variable
    variableOne = 28;
    variableTwo = 32;
    variableThree = 37;
    variableFour = 24;
    variableFive = 33;
    numOfVariable = 5;
    
    //Process
    sum = variableOne + variableTwo + variableThree +
            variableFour + variableFive;
    average = sum/numOfVariable;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The average of the variables is " << average <<endl;
    
    return 0;
}

