/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Menu for Assignment 3 problems
 *
 * Created on October 10, 2018, 8:32 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare All Variables here
    char choice; //Option 0 to 9 input as a character not a numeric value
    
    //Input or initialize values here
    cout << "This program illustrates a Menu" << endl;
    cout << "Choose the problem you wish to solve" << endl << endl;
    cout << "0 -> Gaddis_9thEd_Chap4_ProgProb1_MinMax" << endl;
    cout << "1 -> Gaddis_9thEd_Chap4_ProgProb3_MagicDate" << endl;
    cout << "2 -> Gaddis_9thEd_Chap4_ProgProb4_RectangleArea" << endl;
    cout << "3 -> Gaddis_9thEd_Chap4_ProgProb5_BodyMass" << endl;
    cout << "4 -> Gaddis_9thEd_Chap4_ProgProb6_MassAndWeight" << endl;
    cout << "5 -> Gaddis_9thEd_Chap4_ProgProb9_DollarChange" << endl;
    cout << "6 -> Gaddis_9thEd_Chap4_ProgProb11_MathTutor" << endl;
    cout << "7 -> Gaddis_9thEd_Chap4_ProgProb18_FatGramCalculator" << endl;
    cout << "8 -> Gaddis_9thEd_Chap4_ProgProb23_GeometryCalculator" << endl;
    cout << "9 -> Gaddis_9thEd_Chap4_ProgProb25_ServiceProvider" << endl;
    cin >> choice;
    
    //Process/Calculations Here
    switch (choice)
    {
        case '0':
        {
            
            //Variable
            int num_1;
            int num_2;
            int grtNum;
            int lessNum;


            //Map
            cout << "Please enter a number: ";
            cin >> num_1;
            cout << "Please enter another number: ";
            cin >> num_2;

            //Process
            grtNum = (num_1 > num_2) ? num_1 : num_2;
            lessNum = (num_2 > num_1) ? num_1 : num_2;

            //Display
            cout << "The greater number is " << grtNum << endl;
            cout << "The lesser number is " << lessNum << endl;
            break;
        }
            
        case '1':
        {
            //Variable
            int day, month, year;

            //Map
            cout << "I will determine if a date is magic.\n";
            cout << "Please enter a day in numeric form: ";
            cin >> day;
            cout << "Please enter a month in numeric form: ";
            cin >> month;
            cout << "Please enter a two-digit year: ";
            cin >> year;

            //Process
            if ((day * month) == year)
                cout << "This date is magic.";
            else
                cout << "This date is not magic.";
            break;
        }
            
        case '2':
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
            break;
        }
            
        case '3':
        {
            //Variable
            float weight;      //weight in pounds
            float height;      //height in inches
            float BMI;          //body mass index

            //Map
            cout << "I will determine your body mass index or (BMI).\n";
            cout << "please enter your weight in pounds: ";
            cin >> weight;
            cout << "Please enter your height in inches: ";
            cin >> height;

            //Process
            BMI = weight * 703 / (pow(height, 2.0));
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            if ((BMI <= 25) && (BMI >= 18.5))
            {
                cout << "Your BMI is " << BMI << endl;
                cout << "You are at optimal weight.";
            }
            else if (BMI >25)
            {
                cout << "Your BMI is " << BMI << endl;
                cout << "You are overweight.";
            }
            else
            {
                cout << "Your BMI is " << BMI << endl;
                cout << "You are underweight.";
            }
            break;
        }
            
        case '4':
        {
            //Variable
            double mass;        //Weight is in kilograms
            double weight;      //Weight is displayed in newtons

            //Map
            cout << "I will calculate the weight of an object.\n";
            cout << "Enter the mass of the object\n";
            cout << "in kilograms: ";
            cin >> mass;

            //Process
            weight = mass * 9.8;
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            if (weight > 1000)
            {
                cout << "The weight of the object is " <<weight<< " newtons.\n";
                cout << "The object is too heavy.";
            }
            else if (weight < 10)
            {
                cout << "The weight of the object is "<<weight<< " newtons.\n";
                cout << "The object is too light.";
            }
            else
                cout << "The object has a weight of " << weight << " newtons.";
            break;
        }
        
        case '5':
        {
            //Constant
            const double penny = 0.01;
            const double nickel = 0.05;
            const double dime = 0.10;
            const double quarter = 0.25;
            const double dollar = 1.00;

             //Variable
             int numPenny;
             int numNickel;
             int numDime;
             int numQtr;
             double totChange; 

             //Map
             cout << "Let's play a game.\n";
             cout << "Enter an amount of pennies, nickels,\n";
             cout << "dimes and quarters to make up exactly\n";
             cout << "one dollar.\n";
             cout << "Enter a number of pennies: ";
             cin >> numPenny;
             cout << "Enter a number of nickels: ";
             cin >> numNickel;
             cout << "Enter a number of dimes: ";
             cin >> numDime;
             cout << "Enter a number of quarters: ";
             cin >> numQtr;

             //Process
             totChange = (numPenny  * penny) + (numNickel * nickel) + 
                     (numDime * dime) + (numQtr * quarter);
             if (totChange == dollar)
             {
                 cout << "Your change equals exactly one dollar.\n";
                 cout << "Congratulations, you win the game.";
             }
             else if (totChange > dollar)
             {
                 cout << "Your change equals more than a dollar.\n";
                 cout << "You lose the game. Try again.\n";
             }
             else if (totChange < dollar)
             {
                 cout << "Your change equals less than a dollar.\n";
                 cout << "You lose the game. Try again.\n";
             }
             else
             {
                 cout << "Invalid entry of coins. Restart the game,\n";
                 cout << "and enter valid number of coins.";
             }
            break;
        }
        
        case '6':
        {
            //Constant
            const int MIN_VALUE = 10;  //minimum number value
            const int MAX_VALUE = 10000;  //maximum number value

            //Variable
            int number1;
            int number2;
            int solution;
            int userAns;   //Answer that user enters
            char ch;       //to pause the program and let user work out problem

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
            break;
        }
        
        case '7':
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
                    fatCalories = numFatGrams * 9;//9 calories in a gram of fat
                    if (fatCalories < totCalories)
                    {
                        PrcntCal = fatCalories / totCalories;
                        cout.setf(ios::fixed);
                        cout.setf(ios::showpoint);
                        cout.precision(2);

                        cout << "The calories from fat are "
                                << PrcntCal << "% of\n";
                        cout << "the total calories of the food.\n";
                        if (PrcntCal < 0.30)
                            cout << "The food is low fat.";
                        else
                            cout << "The food is too high in fat.";
                    }
                    else
                    {
                        cout << "Error. The number of calories ";
                        cout << "from fat may NOT\n";
                        cout << "be greater than the ";
                        cout << "total number of Calories\n";
                        cout << "of the food. Either the ";
                        cout << "total calories of the\n";
                        cout << "food or the fat grams";
                        cout << "were incorrectly entered.";
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
        
        break;
        }
        
        case '8':
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
            double Area;    // used for area of triangle, circle, and rectangle

            //Display Menu and get choice
            cout << "\tGeometry Calculator\n\n";
            cout << "1. Calculate the Area of a Circle\n";
            cout << "2. Calculate the Area of a Rectangle\n";
            cout << "3. Calculate the Area of a Triangle\n";
            cout << "4. Quit\n\n";
            cout << "Enter your choice: ";
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
            break;
        }
        
        case '9':
        {
            //Constant for package rates
            const double packageA = 39.99;
            const double packageB = 59.99;
            const double packageC = 69.99;

            //Constant for data overage
            const double Overage_A = 10.00;    //additional charge per gigabyte
            const double Overage_B = 5.00;

            //Constant for menu choices
            const char A_Choice = 'A';
            const char B_Choice = 'B';
            const char C_Choice = 'C';

            //Variable
            char choice;
            int gigsUsed;   //number of gigabytes of data used
            int gigsOver;   //number of gigabytes over limit
            double totAmnt; //total amount due including added
            double AddCharge;   // charge from overage times number
                                //  of gigs over limit

            //Display Menu
            cout << "\tMobile Service Provider\n\n";
            cout << "Package A - $39.99 per month, 4 gigabytes provided.\n";
            cout << "\t$10 additional cost per gigabyte over lmit.\n\n";
            cout << "Package B -  $59.99 per month, 8 gigabytes provided.\n";
            cout << "\t$5 additional cost per gigabyte over lmit.\n\n";
            cout << "Package C - $69.99 per month, unlimited data provided.\n\n";
            cout << "When prompted, please enter A, B, or C\n";
            cout << "for package purchased.\n";
            cout << "Enter package purchased: ";
            cin >> choice;
            cout << "Enter gigabytes used: ";
            cin >> gigsUsed;

            //Map
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            if (choice == A_Choice)
            {
                if (gigsUsed > 4)
                {
                    gigsOver = gigsUsed - 4;
                    AddCharge = Overage_A * gigsOver;
                    totAmnt = packageA + AddCharge;
                    cout << "Your total amount due is $" << totAmnt << endl;
                }
                else if (gigsUsed > 0 && gigsUsed < 4)
                {
                    cout << "Your total amount due is $" << packageA << endl;
                }
                else
                {
                    cout << "Invalid Entry. Must enter valid number of gigabytes.";
                }
            }
            else if (choice == B_Choice)
            {
                if (gigsUsed > 8)
                {
                    gigsOver = gigsUsed -8;
                    AddCharge = Overage_B * gigsOver;
                    totAmnt = packageB + AddCharge;
                    cout << "Your total amount due is $" << totAmnt << endl;
                }
                else if (gigsUsed > 0 && gigsUsed < 8)
                {
                    cout << "Your total amount due is $" << packageB << endl;
                }
                else
                {
                    cout << "Invalid Entry. Must enter valid number of gigabytes.";
                }
            }
            else if (choice == C_Choice)
            {
                cout << "Your total amount due is $" << packageC << endl;
            }
            else
            {
                cout << "Invalid Entry. Must Choose A, B, or C.";
            }
            break;
        }
        
        default:
            cout << "Error. You must enter an option between 0 and 9." << endl;
    }

    return 0;
}

