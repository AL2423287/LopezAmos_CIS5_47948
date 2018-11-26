/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Find the smallest and largest value in an array of elements.
 * Created on November 23, 2018, 9:52 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main()
{
    //Declare Variables
    const int NUM_ELEMENTS = 10;    //number of elements
    int numbers[NUM_ELEMENTS];      //array of 10 elements
    int count;                      //loop counter
    int highest;
    int lowest;
    
    //Get values from user
    cout<<"Enter 10 values.\n";
    for(count=0; count<NUM_ELEMENTS; count++)
    {
        cout<<"Enter a value for element "<<(count+1)<<": ";
        cin>>numbers[count];
        cout<<endl;
    }
    //Find lowest number of the 10 values
    lowest=numbers[0];
    for(count=1; count<NUM_ELEMENTS; count++)
    {
        if(numbers[count]<lowest)
            lowest=numbers[count];
    }
    //Find highest number of the 10 values
    highest=numbers[0];
    for(count=1; count<NUM_ELEMENTS; count++)
    {
        if(numbers[count]>highest)
            highest=numbers[count];
    }
    //Display lowest and highest numbers
    cout<<"The Highest number is: "<<highest<<endl;
    cout<<"The Lowest number is "<<lowest<<endl;
    
    return 0;
}

