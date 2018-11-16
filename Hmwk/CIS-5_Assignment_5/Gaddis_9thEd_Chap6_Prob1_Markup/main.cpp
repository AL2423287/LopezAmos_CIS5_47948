/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate the markup of an item. Use function called calculateRetail
 * Created on November 10, 2018, 7:35 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;
//User Libraries

//Global Constants
//Like PI, e, gravity, NO GLOBAL VARIABLES

//Function Prototypes
float calculateRetail(float, float);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    float whole;    //holds wholesale price of the item
    float markup;   //holds the markup percentage of the item
    float rtlPrce;  //Holds value returned by calculateRetail function
    
    //Input
    cout<<"Please enter the wholesale price of an item\n";
    cout<<"and the item's markup percentage. Please enter\n";
    cout<<"nonnegative values for each.\n";
    cout<<"Enter Wholesale price: $";
    cin>>whole;
    cout<<"Enter markup percentage as a decimal: ";
    cin>>markup;
    
    //Repeat input prompt until all values are not negative
    while(whole<0 || markup<0)
    {
        cout<<"\nPlease enter a positive value for\n";
        cout<<"wholesale price and markup percentage\n";
        cout<<"Enter wholesale price: $";
        cin>>whole;
        cout<<"Enter markup percentage as a decimal: ";
        cin>>markup;
        cout<<endl;
    }
    //Call calculateRetail function
    calculateRetail(whole, markup);
    rtlPrce = calculateRetail(whole, markup);
    
    //Output retail price to user
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\nThe retail price of the item is $";
    cout<<rtlPrce<< endl;

    return 0;
}

//function to calculate the retail of an using arguments from main.
float calculateRetail(float num1, float num2)
{
    float retail;  //holds retail price of an item
    
    retail=num1+(num1*num2);
    //return value of retail variable to where it was called
    return retail;
}

