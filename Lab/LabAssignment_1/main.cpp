/* 
 * File:   main.cpp
 * Author: Amos Lopez
 *
 * Created on September 10, 2018, 7:52 PM
 * Purpose: To calculate the military budget as a percentage of federal budget
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float milBdgt, fedBdgt, milPrcnt;
    
    //Initial Variable
    milBdgt = 7.0e11;   //military budget = $700 billion
    fedBdgt = 4.1e12;   //federal budget = $4.1 trillion
    
    //Process Input to Output
    milPrcnt = milBdgt/fedBdgt;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display Outputs
    cout << "The military has a budget of $" << milBdgt <<endl;
    cout << "which is " << milPrcnt << "% of the federal budget.\n";

    return 0;
}

