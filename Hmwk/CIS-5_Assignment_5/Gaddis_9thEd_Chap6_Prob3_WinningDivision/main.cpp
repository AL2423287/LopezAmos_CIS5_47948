/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Using various functions called by main to determine
 * highest sales among four company divisions
 * Created on November 10, 2018, 9:57 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
double getSales(string);
void findHighest(double,double,double,double,string,string,string,string);

//Program Execution Begins Here
int main()
{
    //Declare variables
    string div1, div2, div3, div4;  //hold names of divisions
    double sale1, sale2, sale3, sale4;   //hold sales for each division
    
    //Input of Initialize
    cout<<"I will determine which division was\n";
    cout<<"the highest-grossing among Northeast, Southeast\n";
    cout<<"Northwest and Southeast.\n.";
    cout<<"Enter a division name: ";
    cin>>div1;
    //pass name of each division to getSales function
    //Get value from getSales function
    sale1=getSales(div1);
    
    //pass name of each division and get sales back from getSales function
    cout<<"\nEnter another division name: ";
    cin>>div2;
    sale1=getSales(div2);
    
    cout<<"\nEnter a 3rd division name: ";
    cin>>div3;
    sale3=getSales(div3);
    
    cout<<"\nEnter a 4th division name: ";
    cin>>div4;
    sale4=getSales(div4);
    
    //make call to findHighest function to determine highest-grossing division
    findHighest(sale1, sale2, sale3, sale4, div1, div2, div3, div4);
    
    return 0;
}

//function gets sales from user and returns value to main
double getSales(string name)
{
    double sales;
    cout<<"Enter the quarterly sales for division "<<name<<": $";
    cin>>sales;
    //Validate user input
    while(sales<0.0)
    {
        cout<<"\nError. Please enter a sales figure more than\n";
        cout<<"or equal to $0.0\n";
        cout<<"Enter a sales figure for "<<name<<": $";
        cin>>sales;
    }
    return sales;
}

//function determines and outputs the winning division with sales figure
void findHighest(double num1,double num2,double num3,double num4,string name1,
        string name2,string name3,string name4)
{
    double highest; //holds highest sales figure
    string winDiv;  //hold name for winning division
    
    if(num1>num2 && num1>num3 && num1>num4)
    {
        highest=num1;
        winDiv=name1;
        cout<<"The highest grossing division is "<<winDiv<<endl;
        cout<<"with a sales figure of $"<<highest<<endl;
    }
    else if(num2>num1 && num2>num3 && num2>num4)
    {
        highest=num2;
        winDiv=name2;
        cout<<"The highest grossing division is "<<winDiv<<endl;
        cout<<"with a sales figure of $"<<highest<<endl;
    }
    else if(num3>num1 && num3>num2 && num3>num4)
    {
        highest=num3;
        winDiv=name3;
        cout<<"The highest grossing division is "<<winDiv<<endl;
        cout<<"with a sales figure of $"<<highest<<endl;
    }
    else if(num4>num1 && num4>num2 && num4>num3)
    {
        highest=num4;
        winDiv=name4;
        cout<<"The highest grossing division is "<<winDiv<<endl;
        cout<<"with a sales figure of $"<<highest<<endl;
    }
    else
        cout<<"Either 2 or more divisions have equal sales figures."<<endl;
}