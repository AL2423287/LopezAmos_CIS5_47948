/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Display a menu for calculating the area of
 * different shapes.
 *
 * Created on September 30, 2018, 11:13 PM
 */

#include <iostream> //I/O Library
#include <cmath>    //Math functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
double PI = 3.14159;    //constant for pi

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Constant for menu choices
    const int CirChoice = 1;    //Circle Choice
    const int RecChoice = 2;    //Rectangle Choice
    const int TriChoice = 3;    //Triangle Choice
    const int Quit = 4;         //Quit Choice
    
    //Declare Variables Here
    int choice;     //to hold menu choice
    float length;  //used for length of rectangle
    float width;   //used for width of rect.
    float base;    //used for base of triangle
    float height;  //used for height of triangle
    float radius;  //used for radius of circle
    float Area;    //will be used for area of triangle, circle, and rectangle
    
    //Display Menu and get choice
    cout << "\tGeometry Calculator\n\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    //Process/ Calculation Here
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (choice == CirChoice)
    {
        cout << "Enter the radius: ";
        cin >> radius;
        Area = PI * (pow(radius, 2.0));
        cout << "The area of the circle is " << Area << endl;
    }
    else if (choice == RecChoice)
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        Area = length * width;
        cout << "The area of the rectangle is " << Area << endl;
    }
    else if (choice == TriChoice)
    {
        cout << "Enter height of triangle: ";
        cin >> height;
        cout << "Enter base of triangle: ";
        cin >> base;
        Area = base * height * 0.5;
        cout << "The area of the triangle is: " << Area << endl;
    }
    else if (choice == Quit)
    {
        cout << "The Program is ending.";
    }
    else
    {
        cout << "Invalid Entry. Restart Program\n";
        cout << "And Enter Valid Choice.";
    }

    return 0;
}

