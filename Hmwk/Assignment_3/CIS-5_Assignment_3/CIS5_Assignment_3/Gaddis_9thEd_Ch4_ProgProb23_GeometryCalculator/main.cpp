/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Display a menu for calculating the area of
 * different shapes.
 *
 * Created on September 30, 2018, 11:13 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
    //Constants
    double PI = 3.14159;    //constant for pi
    
    //Constant for menu choices
    const int Circle_Choice = 1,
            Rectangle_Choice = 2,
            Triangle_Choice = 3,
            Quit_Choice = 4;
    
    //Variable
    int choice;     //to hold menu choice
    double length;  //used for length of rectangle
    double width;   //used for width of rect.
    double base;    //used for base of triangle
    double height;  //used for height of triangle
    double radius;  //used for radius of circle
    double Area;    //will be used for area of triangle, circle, and rectangle
    
    //Display Menu and get choice
    cout << "\tGeometry Calculator\n\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choic: ";
    cin >> choice;
    
    //Process
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (choice == Circle_Choice)
    {
        cout << "Enter the radius: ";
        cin >> radius;
        Area = PI * (pow(radius, 2.0));
        cout << "The area of the circle is " << Area << endl;
    }
    else if (choice == Rectangle_Choice)
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        Area = length * width;
        cout << "The area of the rectangle is " << Area << endl;
    }
    else if (choice == Triangle_Choice)
    {
        cout << "Enter height of triangle: ";
        cin >> height;
        cout << "Enter base of triangle: ";
        cin >> base;
        Area = base * height * 0.5;
        cout << "The area of the triangle is: " << Area << endl;
    }
    else if (choice == Quit_Choice)
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

