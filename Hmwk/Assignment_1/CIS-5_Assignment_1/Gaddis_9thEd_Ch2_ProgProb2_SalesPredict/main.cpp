/* 
 * File:   SalesPredict.cpp
 * Author: Amos Lopez
 * Created on September 8, 2018, 1:16 AM
 * Purpose: Predict sales that a company division will generate
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

    //Declare Variable
    double divisionSales, percent, companySales;
    
    //Initial Variable
    percent = 0.58;
    companySales = 8600000.00;
    
    //Process
    divisionSales = percent * companySales;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The East Coast sales division \n";
    cout << "will generate $" << divisionSales << endl;
    
    
    return 0;
}

