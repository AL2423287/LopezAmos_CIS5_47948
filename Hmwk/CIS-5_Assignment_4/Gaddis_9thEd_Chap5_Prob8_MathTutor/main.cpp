/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Display a menu for an addition, subtraction, multiplication,
 * and division problem. loop the menu until user chooses quit option.
 * Created on October 18, 2018, 1:15 PM
 */

//System Libraries Here
#include <iostream>         //I/O Library
#include <cstdlib>          //needed for srand and seed
#include <iomanip>          //needed for setw
#include <cmath>            //needed for time function

using namespace std;

//User Library Here

//Global Constants Only. NO Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Constant
    const int MinValue = 100;          //minimum number value
    const int MaxValue = 1000;        //maximum number value
    const int addChoice = 1;            //choice for addition problem
    const int subChoice = 2;            //choice for subtraction problem
    const int mltChoice = 3;           //choice for multiplication problem
    const int divChoice = 4;            //choice for division problem
    const int Quit = 5;                 //choice to quit program
    
    //Declare Variables Here
    int choice;             //to hold user's choice
    float num1;
    float num2;
    double Answer;            //actual solution for problem
    float usrAnswer;            //answer that user provides
    
    //get the system time
    unsigned seed = time(0);
    
    //seed the random number generator
    srand(seed);
    
    //Display Menu and get Choice
    do
    {
        cout << "\tMath Tutor\n\n";
        cout << "1. Addition Problem\n";
        cout << "2. Subtraction Problem\n";
        cout << "3. Multiplication Problem\n";
        cout << "4. Division Problem\n";
        cout << "5. Quit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        //Process/Calculations Here
        while (choice >= 1 && choice <= 4)
        {
            if (choice == addChoice)
            {
                cout << "Generating numbers to add...\n";
                num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                num2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                Answer = num1 + num2;

                cout << setw(6) << num1 << endl;
                cout << "+" << setw(5) << num2 << endl;
                cout << endl << endl;
                cout << "Enter your answer: ";
                cin >> usrAnswer;

                if (usrAnswer == Answer)
                {
                    cout << "Congratulations. Your answer is correct.\n";
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
                else
                {
                    cout << "Sorry, your answer is incorrect.\n";
                    cout << "The correct answer is " << Answer << endl;
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
            }
            else if (choice == subChoice)
            {
                cout << "Generating numbers to subtract...\n";
                num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                num2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                Answer = num1 - num2;

                cout << setw(6) << num1 << endl;
                cout << "-" << setw(5) << num2 << endl;
                cout << endl << endl;
                cout << "Enter your answer: ";
                cin >> usrAnswer;

                if (usrAnswer == Answer)
                {
                    cout << "Congratulations. Your answer is correct.\n";
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
                else
                {
                    cout << "Sorry, your answer is incorrect.\n";
                    cout << "The correct answer is " << Answer << endl;
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
            }
            else if (choice == mltChoice)
            {
                cout << "Generating numbers to multiply...\n";
                num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                num2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                Answer = num1 * num2;

                cout << setw(6) << num1 << endl;
                cout << "x" << setw(5) << num2 << endl;
                cout << endl << endl;
                cout << "Enter your answer: ";
                cin >> usrAnswer;

                if (usrAnswer == Answer)
                {
                    cout << "Congratulations. Your answer is correct.\n";
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
                else
                {
                    cout << "Sorry, your answer is incorrect.\n";
                    cout << "The correct answer is " << Answer << endl;
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
            }
            else
            {
                cout << "Generating numbers to divide...\n";
                num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                num2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
                Answer = num1 / num2;

                cout << num1 << " / " << num2 << endl << endl;
                cout << "Enter your answer and include 2 decimal places: ";
                cin >> usrAnswer;

                if (usrAnswer == Answer)
                {
                    cout << "Congratulations. Your answer is correct.\n";
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
                else
                {
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    cout << "Sorry your answer is incorrect.\n";
                    cout << "The correct answer is " << Answer << endl;
                    cout << "Enter your menu choice: ";
                    cin >> choice;
                }
            }
        }
    } while (choice != Quit);
    return 0;
}

