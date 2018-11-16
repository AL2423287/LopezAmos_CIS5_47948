/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate kinetic energy of a moving object using kineticEnergy
 * function.
 * Created on November 11, 2018, 6:58 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;
//User Libraries

//Global constants

//Function Prototypes
double kineticEnergy(float, float);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    float mass; //holds mass in kilograms
    float velocity; //holds velocity in meter per second
    double KE;  //holds kinetic energy by getting value from kineticEnergy func.
    
    //Input or Initialize
    cout<<"Please enter the mass of the moving object in kilograms: ";
    cin>>mass;
    while (mass<0)
    {
        cout<<"\nError. Please enter a mass greater than 0 in kilograms: ";
        cin>>mass;
    }
    cout<<"\nPlease enter the velocity of the\n";
    cout<<"moving object in meters per second: ";
    cin>>velocity;
    while(velocity<0)
    {
        cout<<"\nError. Please enter a velocity of 0 or greater in m/s: ";
        cin>>velocity;
    }
    //pass the arguments of mass and velocity into function and get back
    //kinetic energy
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    KE=kineticEnergy(mass, velocity);
    cout<<"\nThe Kinetic Energy of the moving object is "<<KE<<" Joule(s)."<<endl;
    
    return 0;
}

double kineticEnergy(float num1, float num2)
{
    double result;  //holds kinetic energy in Joules
    
    result=0.5*num1*(num2*num2);
    
    return result;
}

