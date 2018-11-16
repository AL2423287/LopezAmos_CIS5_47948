/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: using multiple functions called by main, determine safest
 * driving area by fewest number of accidents.
 * Created on November 11, 2018, 4:40 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <string>   //string Library

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int getAccidents(string);
void findLowest(int,int,int,int,string,string,string,string);

//Program Execution Begins Here
int main()
{
    //Declare Variables
    string reg1,reg2,reg3,reg4; //Hold name of each region
    int accdnt1,accdnt2,accdnt3,accdnt4;    //# of accidents in each region
    
    //Prompt Input or Initialize
    cout<<"I will determine which area is most safe among four regions.\n";
    cout<<"(North, West, East, South)\n";
    cout<<"Enter a region: ";
    cin>>reg1;
    
    //Pass name of region to getAccidents function and get back # of accidents
    accdnt1=getAccidents(reg1);
    //Repeat getting name of each region, pass to function, & get back accidents
    cout<<"Enter a 2nd region: ";
    cin>>reg2;
    accdnt2=getAccidents(reg2);
    
    cout<<"Enter a 3rd region: ";
    cin>>reg3;
    accdnt3=getAccidents(reg3);
    
    cout<<"Enter a 4th region: ";
    cin>>reg4;
    accdnt4=getAccidents(reg4);
    
    //Pass all regions and all accident values to getLowest function
    findLowest(accdnt1,accdnt2,accdnt3,accdnt4,reg1,reg2,reg3,reg4);
    
    return 0;
}

//get number of accidents for a region
int getAccidents(string name)
{
    int nAccidents; //hold number of accidents user inputs
    
    //get number of accidents for region from user
    cout<<"Enter number of accidents for region "<<name<<": ";
    cin>>nAccidents;
    while(nAccidents<0)
    {
        cout<<"Error. Must input a number greater than 0."<<endl;
        cout<<"Enter number of accidents for region "<<name<<": ";
        cin>>nAccidents;
    }
    
    return nAccidents;
}

//determines which region has lowest number of accidents
void findLowest(int num1,int num2,int num3,int num4,string name1,string name2,
        string name3,string name4)
{
    string safest;  //holds name of region that is safest
    int lowest; //holds lowest number of accidents
    
    if(num1>num2&&num1>num3&&num1>num4)
    {
        safest=name1;
        lowest=num1;
        cout<<"The safest region is "<<safest<<endl;
        cout<<"with the number of accidents being "<<lowest<<endl;
    }
    else if(num2<num1&&num2<num3&&num2<num4)
    {
        safest=name2;
        lowest=num2;
        cout<<"The safest region is "<<safest<<endl;
        cout<<"with the number of accidents being "<<lowest<<endl;
    }
    else if(num3<num1&&num3<num2&&num3<num4)
    {
        safest=name3;
        lowest=num3;
        cout<<"The safest region is "<<safest<<endl;
        cout<<"with the number of accidents being "<<lowest<<endl;
    }
    else if(num4<num1&&num4<num2&&num4<num3)
    {
        safest=name4;
        lowest=num4;
        cout<<"The safest region is "<<safest<<endl;
        cout<<"with the number of accidents being "<<lowest<<endl;
    }
    else
        cout<<"Either 2 or more regions are equally safe."<<endl;
}