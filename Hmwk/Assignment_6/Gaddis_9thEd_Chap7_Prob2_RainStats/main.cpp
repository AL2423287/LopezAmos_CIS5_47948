/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Get rainfall data for each of 12 months and calculate
 * yearly total rainfall, average monthly rainfall, and highest/lowest rain
 * Created on November 24, 2018, 8:46 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //output format Library
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main()
{
    //Declare Variables
    const int nMonths = 12;     //number of months
    double rainfall[nMonths];      //array of 12 elements
    int count;                  //loop counter
    double avg;                 //average monthly rainfall
    double totRain;             //total rain for year
    double highest;             //highest rainfall
    int hiMnth;                 //month with most rain
    double lowest;              //lowest rainfall
    int lowMnth;                //month with least rain
    
    //Get Input from user for each month rainfall
    cout<<"When asked, please enter the monthly rainfall in inches\n";
    cout<<"for each of the 12 months.\n";
    totRain=0.0;
    for(count=0; count<nMonths; count++)
    {
        cout<<"Enter rainfall (in inches) for month "<<(count+1)<<": ";
        cin>>rainfall[count];
        while(rainfall[count]<0.0)
        {
            cout<<"Please enter a non-negative value for rainfall: ";
            cin>>rainfall[count];
        }
        totRain+=rainfall[count];
    }
    //Determine which month has highest amount of rainfall
    highest=rainfall[0];
    hiMnth=1;
    for(count=1; count<nMonths; count++)
    {
        if(rainfall[count]>highest)
        {
            highest=rainfall[count];
            hiMnth=count+1;
        }
    }
    //Determine which month has highest amount
    lowest=rainfall[0];
    lowMnth=1;
    for(count=1; count<nMonths; count++)
    {
        if(rainfall[count]<lowest)
        {
            lowest=rainfall[count];
            lowMnth=count+1;
        }
    }
    //calculate average monthly rainfall
    avg=totRain/(nMonths);
    //Display total rain, average monthly rain, and highest/lowest months
    cout<<"The total rainfall for the year is ";
    cout<<fixed<<showpoint<<setprecision(1)<<totRain<<"inches.\n";
    cout<<"The average monthly rainfall for the year is ";
    cout<<fixed<<showpoint<<setprecision(1)<<avg<<"inches.\n";
    cout<<"Month "<<hiMnth<<" had the most amount of rain.\n";
    cout<<"Month "<<lowMnth<<" had the least amount of rain.\n";
    
    return 0;
}

