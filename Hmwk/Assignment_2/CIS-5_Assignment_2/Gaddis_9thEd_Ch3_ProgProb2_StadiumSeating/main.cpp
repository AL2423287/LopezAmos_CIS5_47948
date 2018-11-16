/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Amos Lopez
 *
 * Created on September 17, 2018, 2:07 PM
 * Purpose: Calculate and display the amount of income
 * generated from ticket sales
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float classAPrice=15, classBPrice=12, classCPrice=9;   //price of tickets
    float classASold, classBSold, classCSold; //number of tickets sold
    float classAIncome, classBIncome, classCIncome;
    float totalIncome;
    
    //Process
    cout << "At the stadium, Class A tickets cost $15.\n";
    cout << "Enter number of Class A tickets sold: ";
    cin >> classASold;
    cout << "Class B tickets cost $12.\n";
    cout << "Enter number of Class B tickets sold: ";
    cin >> classBSold;
    cout << "Class C tickets cost $9.\n";
    cout << "Enter number of Class C tickets sold: ";
    cin >> classCSold;
    
    classAIncome = classASold * classAPrice;
    classBIncome = classBSold * classBPrice;
    classCIncome = classCSold * classCPrice;
    totalIncome = classAIncome + classBIncome + classCIncome;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "With all the ticket sales, the total income\n";
    cout << "generated is $" << totalIncome << endl;

    return 0;
}

