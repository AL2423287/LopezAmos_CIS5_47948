/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Generate random numbers to be added then pause program  to let
 * user work on problem.
 * Created on September 18, 2018, 5:33 PM
 */

#include <iostream>
#include <iomanip> //needed for setw
#include <cstdlib> //for rand and srand
#include <cmath> //for the time function 

using namespace std;

int main(int argc, char** argv) 
{
    //Constant
    const int MIN_VALUE = 1000;  //minimum number value
    const int MAX_VALUE = 10000;  //maximum number value
    
    //Variable
    int number1;
    int number2;
    int solution;
    char ch;
    
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
    cout << "and see the solution to the problem.\n";
    cin.get(ch);
    cout << "the solution is\n";
    cout << solution << endl;

    return 0;
}

