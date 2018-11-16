/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Convert Fahrenheit temp. in a function called celsius and return
 * converted temp. to function main.
 * Created on November 11, 2018, 8:03 PM
 */
//System Libraries
#include <iostream> //I/O Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float celsius(int);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    int fTemp;    //fahrenheit temperature
    float cTemp;    //celsius temperature
    
    //Input or Initialize
    cout<<"I will convert a Fahrenheit temperature to Celsius.\n";
    cout<<"Fahrenheit Temp.\tCelsius Temp.\n";
    cout<<"-------------------------------------\n";
    //Loop for all Fahrenheit temp.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    for(fTemp=1;fTemp<=20;fTemp++)
    {
        cTemp=celsius(fTemp);
        cout<<fTemp<<"\t\t\t"<<cTemp<<endl;
    }
    
    return 0;
}

//Function that converts Fahrenheit temperature to Celsius
float celsius(int tempF)
{
    float tempC;    //celsius temp
    float Temp;
    
    Temp=static_cast<float>(tempF);
    tempC=(5*(Temp-32))/9;
    
    return tempC;
}