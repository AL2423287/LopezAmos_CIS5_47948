/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the number of widgets on a pallet.
 * Created on September 18, 2018, 1:00 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    double widgetWeight = 12.5;   //weight of individual widget in pounds
    double palletWeight;        //weight of pallet by itself
    double totWeight;           //weight of pallet with widgets
    double numberOfWidget;
    double totWdgtWeight;       //total weight of widgets without pallet
    
    //Map
    cout << "Enter the weight of the pallet by itself: ";
    cin >> palletWeight;
    cout << "Enter the weight of the pallet with the stacked widgets: ";
    cin >> totWeight;
    
    totWdgtWeight = totWeight - palletWeight;
    numberOfWidget = totWdgtWeight / widgetWeight;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display
    cout << "There are " << numberOfWidget << " widgets\n";
    cout << "stacked on the pallet.\n";

    return 0;
}

