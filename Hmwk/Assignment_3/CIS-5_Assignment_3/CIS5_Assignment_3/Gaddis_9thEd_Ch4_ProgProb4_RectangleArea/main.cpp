/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: to calculate area of two rectangles and determine
 * whether one is bigger or if they are equal.
 *
 * Created on September 28, 2018, 8:34 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Variable
    float length_1, length_2;
    float width_1, width_2;
    float area_1, area_2;
    
    //Map
    cout << "I will determine whether the areas of two rectangles\n";
    cout << "are equal or not.\n";
    cout << "Enter the length of the 1st rectangle: ";
    cin >> length_1;
    cout << "Enter the width of the 1st rectangle: ";
    cin >> width_1;
    cout << "Enter the length of the 2nd rectangle: ";
    cin >> length_2;
    cout << "Enter the width of the 2nd rectangle: ";
    cin >> width_2;
    
    //Process
    area_1 = length_1 * width_1;
    area_2 = length_2 * width_2;
    if (area_1 > area_2)
        cout << "Rectangle 1 has a greater area than rectangle 2.";
    else if (area_1 < area_2)
        cout << "Rectangle 2 has a greater area than rectangle 1.";
    else
        cout << "The rectangles have equal areas.";
    

    return 0;
}

