
/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Create a structure to hold information on a movie and display
 * 
 * Created on December 9, 2018, 9:02 PM
 */

#include <iostream> //I/O Library
#include <string>   //String Library

using namespace std;

//User Libraries

//Global Constants

//Structure
struct MovieData
{
    string title;   //movie title
    string direct;    //movie director
    int year;   //year movie was released
    int runTime;    //movie runtime in minutes
    double cost;    //production costs
    double revenue; //first year revenue
};

//Function Prototypes
void showData(MovieData);

//Program Execution Begins Here
int main()
{
    //Variables
    MovieData n;
    
    //Get movie information
    cout<<"Enter a movie name: ";
    getline(cin, n.title);
    
    cout<<"Enter the name of the movie's director: ";
    getline(cin, n.direct);
    
    cout<<"Enter the year the movie was released: ";
    cin>>n.year;
    cout<<"Enter the movie's runtime in minutes: ";
    cin>>n.runTime;
    cout<<"Enter the movie's production costs: $";
    cin>>n.cost;
    cout<<"Enter the movie's first year revenue: $";
    cin>>n.revenue;
    
    //Pass as arguments to function showData
    showData(n);
    
    return 0;
}

void showData(MovieData info)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Title: "<<info.title<<endl;
    cout<<"Director: "<<info.direct<<endl;
    cout<<"Year Released: "<<info.year<<endl;
    cout<<"Movie Runtime: "<<info.runTime<<" minutes"<<endl;
    if(info.revenue<info.cost)
        cout<<"First-year loss: $"<<(info.cost-info.revenue)<<endl;
    else
        cout<<"First-year profits: $"<<(info.revenue-info.cost)<<endl;
}