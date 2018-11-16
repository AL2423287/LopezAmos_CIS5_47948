/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate customer's monthly bill based off service plan
 * purchased and amount of gigabytes used.
 *
 * Created on October 1, 2018, 5:52 PM
 */

#include <iostream> //I/O Library

using namespace std;

//User Libraries here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Package rates
    const double packA = 39.99;
    const double packB = 59.99;
    const double packC = 69.99;
    
    //Constant for data overage
    const double OverA = 10.00;    //additional charge per gigabyte
    const double OverB = 5.00;
    
    //Constant for menu choices
    const char A_Choice = 'A';
    const char B_Choice = 'B';
    const char C_Choice = 'C';
    
    //Declare Variables Here
    char choice;
    int gigUsed;   //number of gigabytes of data used
    int gigOver;   //number of gigabytes over limit
    double totAmnt; //total amount due including added
    double AddCharge;   //charge from overage times number of gigs over limit
    
    //Display Menu
    cout << "\tMobile Service Provider\n\n";
    cout << "Package A - $39.99 per month, 4 gigabytes provided.\n";
    cout << "\t$10 additional cost per gigabyte over lmit.\n\n";
    cout << "Package B -  $59.99 per month, 8 gigabytes provided.\n";
    cout << "\t$5 additional cost per gigabyte over lmit.\n\n";
    cout << "Package C - $69.99 per month, unlimited data provided.\n\n";
    cout << "When prompted, please enter A, B, or C\n";
    cout << "for package purchased.\n";
    cout << "Enter package purchased: ";
    cin >> choice;
    cout << "Enter gigabytes used: ";
    cin >> gigUsed;
    
    //Map
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (choice == A_Choice)
    {
        if (gigUsed > 4)
        {
            gigOver = gigUsed - 4;
            AddCharge = OverA * gigOver;
            totAmnt = packA + AddCharge;
            cout << "Your total amount due is $" << totAmnt << endl;
        }
        else if (gigUsed > 0 && gigUsed < 4)
        {
            cout << "Your total amount due is $" << packA << endl;
        }
        else
        {
            cout << "Invalid Entry. Must enter valid number of gigabytes.";
        }
    }
    else if (choice == B_Choice)
    {
        if (gigUsed > 8)
        {
            gigOver = gigUsed -8;
            AddCharge = OverB * gigOver;
            totAmnt = packB + AddCharge;
            cout << "Your total amount due is $" << totAmnt << endl;
        }
        else if (gigUsed > 0 && gigUsed < 8)
        {
            cout << "Your total amount due is $" << packB << endl;
        }
        else
        {
            cout << "Invalid Entry. Must enter valid number of gigabytes.";
        }
    }
    else if (choice == C_Choice)
    {
        cout << "Your total amount due is $" << packC << endl;
    }
    else
    {
        cout << "Invalid Entry. Must Choose A, B, or C.";
    }
    

    return 0;
}

