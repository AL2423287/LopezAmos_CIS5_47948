/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Simulate coin toss. Use function coinToss to toss coin
 * and return to function main
 * Created on November 11, 2018, 9:02 PM
 */
//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //srand and rand
#include <ctime>    //time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int coinToss();

//Program Execution Begins Here
int main()
{
    //Declare Variables
    int ntoss;  //number of coin tosses
    int i;  //loop counter
    int heads, tails;   //accumulators for heads and tails outcomes
    int result; //outcome of each coin toss
    
    //Input or Initialize
    cout<<"Enter how many times to toss a coin: ";
    cin>>ntoss;
    while(ntoss<=0)
    {
        cout<<"please enter a number of coin tosses greater than 0: ";
        cin>>ntoss;
    }
    
    heads=0, tails=0;
    for(i=1;i<=ntoss;i++)
    {
        result=coinToss();
        if (result==1)
            heads++;
        else
            tails++;
    }
    
    cout<<"Out of "<<ntoss<<" coin tosses\n";
    cout<<heads<<" tosses were heads and "<<tails<<" were tails.\n";
    
    return 0;
}

int coinToss()
{
    int num1;
    //System Time
    unsigned seed = time(0);
    //Seed random number generator
    srand(seed);
    //generate coin toss
    num1= rand()%2+1;    //1 or 2
    
    return num1;
}