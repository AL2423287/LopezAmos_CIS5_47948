
/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: Create a structure to hold information on a movie
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
    
    //Pass as arguments to function showData
    showData(n);
    
    return 0;
}

void showData(MovieData info)
{
    cout<<"Title: "<<info.title<<endl;
    cout<<"Director: "<<info.direct<<endl;
    cout<<"Year Released: "<<info.year<<endl;
    cout<<"Movie Runtime: "<<info.runTime<<" minutes"<<endl;
}