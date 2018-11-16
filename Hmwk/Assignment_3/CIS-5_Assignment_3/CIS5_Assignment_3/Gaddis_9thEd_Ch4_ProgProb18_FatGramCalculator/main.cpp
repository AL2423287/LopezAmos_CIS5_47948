/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the fat calorie percentage of a food and 
 * determine if the food is low-fat or not.
 *
 * Created on October 1, 2018, 9:16 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Variable
    double totCalories;     //total number of calories in a food
    double numFatGrams;        //number of fat grams in a food
    double fatCalories;     //number of calories from fat
    double PrcntCal;        //percentage of calories from fat
    
    //Map
    cout << "Enter amount of calories in the food: ";
    cin >> totCalories;
    if (totCalories > 0)
    {
        cout << "Enter number of fat grams in the food: ";
        cin >> numFatGrams;
        if (numFatGrams > 0)
        {
            fatCalories = numFatGrams * 9;      //9 calories in a gram of fat
            if (fatCalories < totCalories)
            {
                PrcntCal = fatCalories / totCalories;
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                
                cout << "The calories from fat are " << PrcntCal << "% of\n";
                cout << "the total calories of the food.\n";
                if (PrcntCal < 0.30)
                    cout << "The food is low fat.";
                else
                    cout << "The food is too high in fat.";
            }
            else
            {
                cout << "Error. The number of calories from fat may NOT\n";
                cout << "be greater than the total number of Calories\n";
                cout << "of the food. Either the total calories of the\n";
                cout << "food or the fat grams were incorrectly entered.";
            }
        }
        else
        {
            cout << "Error. Must enter a valid number of fat grams.";
        }
    }
    else
    {
        cout << "Error. Must enter a valid number of calories.";
    }
    
    return 0;
}

