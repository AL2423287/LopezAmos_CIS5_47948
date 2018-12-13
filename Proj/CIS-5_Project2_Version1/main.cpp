/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: "Mexico" Dice Game
 * Created on December 10, 2018, 5:00 PM
 */

//System Libraries
#include <cstdlib>  //needed for srand and seed
#include <ctime>    //time function
#include <iostream> //I/O Library
#include <iomanip>  //output formatting
#include <string>
#include <fstream>  //File stream

using namespace std;

//User Libraries

//Global Constants
//Like e, gravity, and PI

//Function Prototypes here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Variables
    int nGames;    //number of games that will be played
    unsigned int die1, die2;
    string plyr1, plyr2;
    int sum1, sum2;    //total sum of the 2 dice
    unsigned int game;         //loop counter
    char Choice;
    bool winner; //bool will be true if player 1 has the better roll
    ofstream outFile;      //output file to store game number,winner, and loser
    
    //Get System Time
    unsigned int seed = time(0);
    //Seed random number generator
    srand(seed);
    //open output file "GameResults.txt"
    outFile.open("GameResults.txt");
    
    //Introduction to user
    cout << "Welcome to the dice game Mexico.\n";
    cout << "This game is played with 2 players";
    
    //do-while loop will keep going until user decides to quit game
    do
    {
            //Prompt user for input of player names and number of games
            cout<<"\nEnter player 1 first name: ";
            cin>>plyr1;
            cout<<"\nEnter player 2 first name: ";
            cin>>plyr2;
            cout<<"\nEnter a number of games to play greater than 0.\n";
            cout << "Enter how many games to play: ";
            cin >> nGames;
            if(nGames>0)
            {
                cout<<"Game\t\tWinner - Roll\t\tLoser - Roll\n";
                cout<<"-----------------------------------------------------"<<endl;
                //floop for number of games
                for(game=1; game<=nGames; game++)
                {
                    //do-while loop for as long as players have the same roll
                    do  
                    {
                        //roll dice for player 1
                        die1 = rand()%6+1;  //[1,6]
                        die2 = rand()%6+1;  //[1,6]
                        //higher die multiplied by 10 then add to lower
                        if(die1>=die2)
                        {
                            die1*=10;
                            sum1 = die1+die2;
                        }
                        else
                        {
                            die2*=10;
                            sum1 = die1+die2;
                        }

                        //Roll dice for player 2
                        die1 = rand()%6+1;  //[1,6]
                        die2 = rand()%6+1;  //[1,6]

                        if(die1>=die2)
                        {
                            die1*=10;
                            sum2=die1+die2;
                        }
                        else
                        {
                            die2*=10;
                            sum2=die1+die2;
                        }
                    }while(sum1==sum2);
                    //doubles ranked best after 21, then higher of non-double roll
                    switch(sum1)
                    {
                        //win by rolling 21, the best roll
                        case 21:
                            winner=true;
                            break;
                        case 66:
                            sum2!=21 ? winner=true : winner=false;
                            break;
                            //player1 win by 55 double
                        case 55:
                            if(sum2!=21 && sum2!=66)
                                winner=true;
                            else
                                winner=false;
                            break;
                            //player1 win by rolling 44
                        case 44:
                            if(sum2!=21 && sum2!=66)
                                if(sum2!=55)
                                    winner=true;
                            else
                                winner=false;
                            break;
                            //player1 win by rolling 33
                        case 33:
                            if(sum2!=21 && sum2!=66)
                                if(sum2!=55 && sum2!=44)
                                    winner=true;
                            else
                                winner=false;
                            break;
                                //player1 win by rolling 22
                        case 22:
                            if(sum2!=21 && sum2!=66)
                                if(sum2!=55 && sum2!=44)
                                    if(sum2!=33)
                                        winner=true;
                            else
                                winner=false;
                            break;
                       //player1 win by rolling 11(lowest double,better than 65)
                        case 11:
                            if(sum2!=21 && sum2!=66)
                                if(sum2!=55 && sum2!=44)
                                    if(sum2!=33 && sum2!=22)
                                        winner=true;
                            else
                                winner=false;
                            break;
                        default:
                            if(sum2==21)
                                winner=false;
                            else if(sum2==66)
                                winner=false;
                            else if(sum2==55)
                                winner=false;
                            else if(sum2==44)
                                winner=false;
                            else if(sum2==33)
                                winner=false;
                            else if(sum2==22)
                                winner=false;
                            else if(sum2==11)
                                winner=false;
                            else if(sum2>sum1)
                                winner=false;
                            //player1 wins via rolling highest non-double non-21
                            //if player2 also doesnt roll double or 21
                            else
                                winner=true;
                    }
                    //results shown to user if player 1 wins
                    if(winner)
                    {
                        //results show up as a table to user
                        cout<<setw(4)<<game<<"\t\t"<<plyr1<<setw(8)<<sum1;
                        cout<<"\t\t"<<plyr2<<setw(8)<<sum2<<endl;

                        //store results in output file if player 1 wins
                        outFile<<"Game: "<<game<<endl;
                        outFile<<"\nWinner: "<<plyr1<<endl;
                        outFile<<"\nRoll: "<<sum1<<endl;
                        outFile<<"\nLoser: "<<plyr2<<endl;
                        outFile<<"\nRoll: "<<sum2<<endl;
                        outFile<<endl;
                    }
                    //results shown to user if player 2 wins
                    else
                    {
                        cout<<setw(4)<<game<<"\t\t"<<plyr2<<setw(8)<<sum2;
                        cout<<"\t\t"<<plyr1<<setw(8)<<sum1<<endl;

                        //store result in output file if player 2 wins
                        outFile<<"Game: "<<game<<endl;
                        outFile<<"\nWinner: "<<plyr2<<endl;
                        outFile<<"\nRoll: "<<sum2<<endl;
                        outFile<<"\nLoser: "<<plyr1<<endl;
                        outFile<<"\nRoll: "<<sum1<<endl;
                        outFile<<endl;
                    }
                }
            }
            else
            {
                //display error message if user inputs invalid number of games
                cout<<"ERROR. INVALID ENTRY."<<endl;
            }
        cout << "\nWant to play again?\n";
        cout << "Enter Y for Yes or N for no and program will end.\n";
        cout << "(Y/N): ";
        cin>>Choice;
        //if user inputs any key other than 'Y' or 'y', program ends
    }while(Choice == 'Y' || Choice == 'y');
    //Close the output file
    outFile.close();
    cout << "\nThanks for playing Mexico.\n";
    cout << "Game Results Stored.\n";
    cout << "Program now ending.";
            
    return 0;
}