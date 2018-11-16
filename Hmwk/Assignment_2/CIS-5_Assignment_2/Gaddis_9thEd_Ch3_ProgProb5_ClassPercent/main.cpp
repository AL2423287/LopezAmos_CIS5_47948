/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the percentage of
 * male and female students registered in a class
 * Created on September 17, 2018, 8:14 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float classSize, maleStudents, femaleStudents;  //number of students
    float malePrcnt, femalePrcnt;
    
    //Process
    cout << "Please enter how many total students are in the class: \n";
    cin >> classSize;
    cout << "Enter the number of male students: \n";
    cin >> maleStudents;
    cout << "Enter the number of female students: \n";
    cin >> femaleStudents;
    
    malePrcnt = maleStudents / classSize;
    femalePrcnt = femaleStudents / classSize;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The percentage of female students\n";
    cout << "is " << femalePrcnt << endl;
    cout << "The percentage of male students\n";
    cout << "is " << malePrcnt << endl;
    return 0;
}

