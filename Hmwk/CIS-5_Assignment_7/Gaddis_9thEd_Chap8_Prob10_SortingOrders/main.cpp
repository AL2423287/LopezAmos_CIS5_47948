/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Sort two identical arrays using different sorting methods
 * Created on December 2, 2018, 9:54 PM
 */

//System Libraries
#include <iostream>     //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void bubbleSort(int[], int);
void selectSort(int [], int);
void swap(int &, int &);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    const int SIZE = 8;     //size of array
    int values1[SIZE] = { 3, 4, 1, 5, 12, 6, 9, 2 };
    int values2[SIZE] = { 3, 4, 1, 5, 12, 6, 9, 2 };
    
    //Display unsorted values
    cout<<"The unsorted values of array 1:\n";
    for(auto element : values1)
        cout<<element<<" ";
    cout<<endl<<endl;
    
    //Sort and display the array after each pass
    cout<<"The array will be displayed for each pass of the bubble sort:\n";
    bubbleSort(values1, SIZE);
    
    //Display unsorted values for values2 array
    cout<<"\nThe unsorted values of array 2:\n";
    for(auto element : values2)
        cout<<element<<" ";
    cout<<endl<<endl;
    
    //Sort and display the array after each pass of the selectSort function
    cout<<"The array will be displayed for each pass of the select sort method:\n";
    selectSort(values2, SIZE);
    
    return 0;
}

//bubbleSort function sorts an int array in ascending order.
void bubbleSort(int array[], int size)
{
    int maxElemnt;
    int index;
    int count;
    
    for(maxElemnt=size-1; maxElemnt>0; maxElemnt--)
    {
        for(index=0; index<maxElemnt; index++)
        {
            if(array[index]>array[index+1])
            {
                swap(array[index], array[index+1]);
                //Display array after each pass
                for(count=0; count<size; count++)
                    cout<<array[count]<<" ";
                cout<<endl;
            }
        }
    }
}

//selectSort function sorts an int array in ascending order
void selectSort(int arr[], int nNumber)
{
    int minIndex, minVal;
    int count;
    
    for(int start=0; start<(nNumber-1); start++)
    {
        minIndex=start;
        minVal=arr[start];
        for(int index=start+1; index<nNumber; index++)
        {
            if(arr[index]<minVal)
            {
                minVal=arr[index];
                minIndex=index;
            }
        }
        swap(arr[minIndex], arr[start]);
        for(count=0; count<nNumber; count++)
            cout<<arr[count]<<" ";
        cout<<endl;
    }
}

//swap function swaps a and b in memory
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}