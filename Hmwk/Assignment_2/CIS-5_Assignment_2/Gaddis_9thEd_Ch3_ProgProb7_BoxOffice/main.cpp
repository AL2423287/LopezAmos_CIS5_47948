/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Calculate and display the gross and net profit.
 * Created on September 17, 2018, 9:01 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variable
    float childTcktPrice=6.00, adultTcktPrice=10.00;
    float distrAmount;
    float distrPrcnt=0.80;    //percent of gross that movie distributor receives  
    float grossProfit, netProfit;
    int childTcktsSold, adultTcktsSold;
    string movieName;
    
    //Map
    cout << "At the movie theater, child tickets cost $6\n";
    cout << "and adult tickets cot $10.\n";
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Enter the number of child tickets sold: ";
    cin >> childTcktsSold;
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTcktsSold;
    
    grossProfit = (childTcktPrice * childTcktsSold)
            + (adultTcktPrice * adultTcktsSold);
    distrAmount = distrPrcnt * grossProfit;
    netProfit = grossProfit - distrAmount;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Movie:" << movieName <<endl;
    cout << "Adult Tickets Sold:" << adultTcktsSold << endl;
    cout << "Child Tickets Sold:" << childTcktsSold << endl;
    cout << "Gross Box Office Profit: $" << grossProfit << endl;
    cout << "Net Box Office Profit: $" << netProfit << endl;
    cout << "Amount Paid to Distribution: $" << distrAmount <<endl;1

    return 0;
}

