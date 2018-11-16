/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the fat calorie percentage of a food and 
 * determine if the food is low-fat or not.
 *
 * Created on October 1, 2018, 9:16 PM
 */

//System Libraries Here
#include <iostream> //I/O Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or Conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare all Variables Here
    float totCal;     //total number of calories in a food
    float fatGrams;        //number of fat grams in a food
    float fatCal;     //number of calories from fat
    float PrcntCal;        //percentage of calories from fat
    
    //Input or Initialize Values Here
    cout << "Enter amount of calories in the food: ";
    cin >> totCal;
    
    //Process/Calculation Here
    if (totCal > 0)
    {
        cout << "Enter number of fat grams in the food: ";
        cin >> fatGrams;
        if (fatGrams > 0)
        {
            fatCal = fatGrams * 9;      //9 calories in a gram of fat
            if (fatCal < totCal)
            {
                PrcntCal = fatCal / totCal;
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

