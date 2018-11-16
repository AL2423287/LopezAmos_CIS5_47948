/* 
 * File:   SumOfNumbers.cpp
 * Author: Amos Lopez
 * Created on September 7, 2018, 1:03 AM
 * Purpose: To find the sum of numbers
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    //Declare Variable
    int numOne, numTwo, total;
    
    //Initial Variable
    numOne = 50;
    numTwo = 100;
    
    //Process
    total = numOne + numTwo;
    
    cout << "The sum of " << numOne << " and " << numTwo <<endl;
    cout << "is " << total <<endl;
    
    return 0;
}

