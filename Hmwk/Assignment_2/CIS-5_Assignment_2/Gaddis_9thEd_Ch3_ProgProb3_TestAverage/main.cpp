/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the average of multiple test scores
 * Created on September 17, 2018, 6:08 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float testScore1, testScore2, testScore3, testScore4, testScore5;
    float Average;
    
    //Process
    cout << "Please enter test scores to calculate average.\n";
    cout << "Enter test score 1: ";
    cin >> testScore1;
    cout << "Enter test score 2: ";
    cin >> testScore2;
    cout << "Enter test score 3: ";
    cin >> testScore3;
    cout << "Enter test score 4: ";
    cin >> testScore4;
    cout << "Enter test score 5: ";
    cin >> testScore5;
    
    Average =(testScore1 + testScore2 + testScore3 + testScore4 + testScore5)/5;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << "After obtaining all test scores,\n";
    cout << "the average test score is " << Average << endl;

    return 0;
}

