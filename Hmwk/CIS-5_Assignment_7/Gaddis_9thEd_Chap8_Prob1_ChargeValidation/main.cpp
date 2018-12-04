/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: To validate a charge account number by checking for it
 * in a list of account numbers.
 * Created on December 1, 2018, 8:43 PM
 */
    //System Libraries
#include <iostream> //I/O Library

using namespace std;

//User Libraries

//Global Constants Only

//Function Prototypes
int linearSrch(const int[], int, int);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    const int size=18;  //size number of elements in array
    int account[size]=
    { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
    1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
    int accNum;         //account number entered by user
    int results;
    
    //Get charge account number from user
    cout<<"Please enter a charge account number to validate: ";
    cin>>accNum;
    
    //Search array for account number entered by user
    results=linearSrch(account, size, accNum);
    
    //If linearSrch returned -1, then inputted account number was not found.
    if(results==-1)
        cout<<"The account number is not valid.\n";
    else
    {
        cout<<"The account number "<<accNum<<" is valid\n";
    }
    
    return 0;
}

//Function linearSrch does simple linear search of the integer array account.
int linearSrch(const int array[], int SIZE, int value)
{
    int index=0;        //used as subscript to search array
    int position=-1;    //to record the position of the search value
    bool found=false;   //flag to indicate if the value was found in the array
    
    while(index<SIZE && !found)
    {
        if(array[index]==value)     //if value is not found
        {
            found=true;     //set the flag
            position=index; //record the value's subscript
        }
        index++;        //go to the next element in the array
    }
    return position;    //return the position, or -1
}