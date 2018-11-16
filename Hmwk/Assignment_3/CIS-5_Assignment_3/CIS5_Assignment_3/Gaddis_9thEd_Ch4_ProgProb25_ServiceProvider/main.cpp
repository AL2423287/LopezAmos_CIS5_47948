/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate customer's monthly bill based off service plan
 * purchased and amount of gigabytes used.
 *
 * Created on October 1, 2018, 5:52 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Constant for package rates
    const double packageA = 39.99;
    const double packageB = 59.99;
    const double packageC = 69.99;
    
    //Constant for data overage
    const double Overage_A = 10.00;    //additional charge per gigabyte
    const double Overage_B = 5.00;
    
    //Constant for menu choices
    const char A_Choice = 'A';
    const char B_Choice = 'B';
    const char C_Choice = 'C';
    
    //Variable
    char choice;
    int gigsUsed;   //number of gigabytes of data used
    int gigsOver;   //number of gigabytes over limit
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
    cin >> gigsUsed;
    
    //Map
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (choice == A_Choice)
    {
        if (gigsUsed > 4)
        {
            gigsOver = gigsUsed - 4;
            AddCharge = Overage_A * gigsOver;
            totAmnt = packageA + AddCharge;
            cout << "Your total amount due is $" << totAmnt << endl;
        }
        else if (gigsUsed > 0 && gigsUsed < 4)
        {
            cout << "Your total amount due is $" << packageA << endl;
        }
        else
        {
            cout << "Invalid Entry. Must enter valid number of gigabytes.";
        }
    }
    else if (choice == B_Choice)
    {
        if (gigsUsed > 8)
        {
            gigsOver = gigsUsed -8;
            AddCharge = Overage_B * gigsOver;
            totAmnt = packageB + AddCharge;
            cout << "Your total amount due is $" << totAmnt << endl;
        }
        else if (gigsUsed > 0 && gigsUsed < 8)
        {
            cout << "Your total amount due is $" << packageB << endl;
        }
        else
        {
            cout << "Invalid Entry. Must enter valid number of gigabytes.";
        }
    }
    else if (choice == C_Choice)
    {
        cout << "Your total amount due is $" << packageC << endl;
    }
    else
    {
        cout << "Invalid Entry. Must Choose A, B, or C.";
    }
    

    return 0;
}

