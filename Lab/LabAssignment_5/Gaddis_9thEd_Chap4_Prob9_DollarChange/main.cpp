/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Create a change counting game that gets the user
 * to enter number of coins needed to make dollar and display
 * if it's enough, too much, or too little.
 *
 * Created on September 30, 2018, 8:52 PM
 */

#include <iostream> //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Executions Begins Here
int main(int argc, char** argv) 
{
    //Constants for currency
   const float penny = 0.01;
   const float nickel = 0.05;
   const float dime = 0.10;
   const float quarter = 0.25;
   const float dollar = 1.00;
    
    //Declare Variable Here
    int numPenny;
    int numNickel;
    int numDime;
    int numQtr;
    float totChange; 
    
    //Input or Initialize Values Here
    cout << "Let's play a game.\n";
    cout << "Enter an amount of pennies, nickels,\n";
    cout << "dimes and quarters to make up exactly\n";
    cout << "one dollar.\n";
    cout << "Enter a number of pennies: ";
    cin >> numPenny;
    cout << "Enter a number of nickels: ";
    cin >> numNickel;
    cout << "Enter a number of dimes: ";
    cin >> numDime;
    cout << "Enter a number of quarters: ";
    cin >> numQtr;
    
    //Process Here
    totChange = (numPenny  * penny) + (numNickel * nickel) + 
            (numDime * dime) + (numQtr * quarter);
    if (totChange == dollar)
    {
        cout << "Your change equals exactly one dollar.\n";
        cout << "Congratulations, you win the game.";
    }
    else if (totChange > dollar)
    {
        cout << "Your change equals more than a dollar.\n";
        cout << "You lose the game. Try again.\n";
    }
    else if (totChange < dollar)
    {
        cout << "Your change equals less than a dollar.\n";
        cout << "You lose the game. Try again.\n";
    }
    else
    {
        cout << "Invalid entry of coins. Restart the game,\n";
        cout << "and enter valid number of coins.";
    }

    return 0;
}

