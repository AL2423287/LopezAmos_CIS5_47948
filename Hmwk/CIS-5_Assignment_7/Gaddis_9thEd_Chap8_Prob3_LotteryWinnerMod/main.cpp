/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Determine if one of 10 lottery tickets has won by
 * using a binary search.
 * Created on December 1, 2018, 11:28 PM
 */

//System Libraries
#include <iostream>     //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int binarySrch(const int[], int, int);
void bubbleSort(int[], int);
void swap(int &, int &);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    const int SIZE=10;
    int tickets[SIZE]=
    { 13579, 26791, 55555, 33445, 26792, 77777, 62483, 79422, 85647, 93121 };
    int results;    //to hold search results
    int winTckt;    //holds winning lottery ticket number
    
    //Get winning ticket from user
    cout<<"Please enter the winning lottery number for this week: ";
    cin>>winTckt;
    
    //Sort the array
    bubbleSort(tickets, SIZE);
    
    //Search binarySrch to find winning number among user's tickets
    results=binarySrch(tickets, SIZE, winTckt);
    
    //If results has -1, then the winning number is not in the array
    if(results==-1)
        cout<<"Sorry. None of your tickets won this week.\n";
    else
    {
        cout<<"Congratulations! Your ticket with number "<<tickets[results]<<endl;
        cout<<"has won. It is at position "<<results<<endl;
    }
    return 0;
}

//binarySrch looks through array for the winning number using binary search
int binarySrch(const int array[], int size, int value)
{
    int first=0;    //first element in the array
    int last=size-1;    //last array element
    int middle;         //midpoint of the search
    int position=-1;    //position of search value
    bool found=false;   //flag
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;          //calculate midpoint
        if(array[middle]==value)        //If value is found at mid
        {
            found=true;
            position=middle;
        }
        else if(array[middle]>value)    //If value is in lower half of array
            last=middle-1;
        else
            first=middle+1;         //If value is in upper half
    }
    return position;
}

//bubbleSort function swaps around elements in the array
//and puts them in ascending order.
void bubbleSort(int arr[], int nElement)
{
    int maxElement;
    int count;
    
    for(maxElement=nElement-1; maxElement>0; maxElement--)
    {
        for(count=0; count<maxElement;count++)
        {
            if(arr[count]>arr[count+1])
            {
                swap(arr[count], arr[count+1]); //pass values to swap function
            }
        }
    }
}

//Swap function swaps a and b in memory
void swap(int &a, int &b)
{
    int temp=a;
    a = b;
    b = temp;
}