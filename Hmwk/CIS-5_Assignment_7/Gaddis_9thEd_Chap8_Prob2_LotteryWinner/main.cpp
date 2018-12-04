/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Determine whether one of the 10 lottery tickets won this week
 * using a linear search.
 * Created on December 1, 2018, 10:56 PM
 */

//System Library
#include <iostream>     //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int linearSrch(const int[], int, int);

//Program Execution Begins Here
int main()
{
    //Declare variables
    const int SIZE=10;
    int tickets[SIZE]=
    { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    int winTckt;    //holds winning lottery ticket number
    int results;
    
    //get winning lottery number from user
    cout<<"Please enter the winning lottery number for this week: ";
    cin>>winTckt;
    
    //Search array for winning lottery number
    results=linearSrch(tickets, SIZE, winTckt);
    
    //If linearSrch returns -1, then none of the user's tickets won
    if(results==-1)
        cout<<"Sorry, but none of your tickets won this week.\n";
    else
    {
        cout<<"Congratulations! your ticket with number "<<tickets[results]<<endl;
        cout<<"has won the lottery this week.\n";
    }
    
    return 0;
}

//linearSrch function searches array for winning lottery number among user's
//purchased tickets 
int linearSrch(const int array[], int size, int value)
{
    int index=0;        //used as subscript to search array
    int position=-1;    //to record the position of the search value
    bool found=false;   //flag to indicate if the value was found in the array
    
    while(index<size && !found)
    {
        if(array[index]==value)
        {
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}