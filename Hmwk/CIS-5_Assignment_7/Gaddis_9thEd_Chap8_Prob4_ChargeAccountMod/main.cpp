/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: To validate a charge account number by checking for it
 * in a list of account numbers using binary search and selection sort.
 * Created on December 2, 2018, 9:00 PM
 */

//System Libraries
#include <iostream>     //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int binarySrch(const int [], int, int);
void selectSort(int [], int);
void swap(int &, int &);

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
    
    //Sort the array
    selectSort(account, size);
    
    //Search array for account number entered by user
    results=binarySrch(account, size, accNum);
    
    //If linearSrch returned -1, then inputted account number was not found.
    if(results==-1)
        cout<<"The account number is not valid.\n";
    else
    {
        cout<<"The account number "<<accNum<<" is valid\n";
    }
    
    return 0;
}

//binarySrch function uses a binary search to locate inputted account number
int binarySrch( const int array[], int SIZE, int value)
{
    int first=0;
    int last=SIZE-1;
    int middle;
    int position=-1;
    bool found=false;
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        if(array[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(array[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}

//selectSort function sorts an int array in ascending order
void selectSort(int arr[], int nElemnt)
{
    int minIndex, minValue;
    
    for(int start=0; start<(nElemnt-1); start++)
    {
        minIndex=start;
        minValue=arr[start];
        for(int index=start+1; index<nElemnt; index++)
        {
            if(arr[index]<minValue)
            {
                minValue=arr[index];
                minIndex=index;
            }
        }
        swap(arr[minIndex], arr[start]);
    }
}

//swap function swaps a and b in memory.
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}