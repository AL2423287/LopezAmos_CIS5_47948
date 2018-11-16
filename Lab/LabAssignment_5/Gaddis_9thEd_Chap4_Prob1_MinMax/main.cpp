/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: use conditional operator to determine between 2 numbers
 *  which is the smaller number and which is the larger number
 *
 * Created on September 25, 2018, 4:13 PM
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare All Variables Here
    int num_1;
    int num_2;
    int grtNum;
    int lessNum;
    
    
    //Input or Initialize Values Here
    cout << "Please enter a number: ";
    cin >> num_1;
    cout << "Please enter another number: ";
    cin >> num_2;
    
    //Process/Calculations Here
    grtNum = (num_1 > num_2) ? num_1 : num_2;
    lessNum = (num_2 > num_1) ? num_1 : num_2;
    
    //Display
    cout << "The greater number is " << grtNum << endl;
    cout << "The lesser number is " << lessNum << endl;

    return 0;
}

