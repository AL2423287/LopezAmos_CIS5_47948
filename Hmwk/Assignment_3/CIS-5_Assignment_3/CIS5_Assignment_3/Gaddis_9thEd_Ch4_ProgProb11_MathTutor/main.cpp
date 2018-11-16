/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Display random numbers for user to add together
 * and have program pause for user and display if the answer
 * is correct or not.
 *
 * Created on September 30, 2018, 10:42 PM
 */

#include <cstdlib>  //needed for rand and srand
#include <iostream>
#include <iomanip>  //needed for setw
#include <cmath>    //needed for time function

using namespace std;

int main(int argc, char** argv) 
{
    //Constant
    const int MIN_VALUE = 10;  //minimum number value
    const int MAX_VALUE = 10000;  //maximum number value
    
    //Variable
    int number1;
    int number2;
    int solution;
    int userAns;    //Answer that user enters
    char ch;        //to pause the program and let user work out problem
    
    //Get the system time
    unsigned seed = time(0);
    
    //Seed the random number generator
    srand(seed);
    
    //Map
    cout << "Generating numbers to add...\n";
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    solution = number1 + number2;
    
    cout << setw(6) << number1 << endl;
    cout << "+" << setw(5) << number2 << endl;
    cout << endl;
    cout << "The program has paused. Press Enter to continue\n";
    cin.get(ch);
    cout << "Enter your answer: ";
    cin >> userAns;
    if (userAns == solution)
    {
        cout << "Congratulations, your answer is correct.\n";
        cout << "You may restart program to get another problem.";
    }
    else
    {
        cout << "Sorry, that is not the correct answer.\n";
        cout << "The correct answer is " << solution << endl;
        cout << "You may restart program to try another problem.";
    }

    return 0;
}

