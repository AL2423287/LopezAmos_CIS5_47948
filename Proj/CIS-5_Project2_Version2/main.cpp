/* 
 * File:   main.cpp
 * Author: Amos Lopez
 * Purpose: "Mexico" Dice Game
 * Created on December 7, 2018, 7:00 PM
 */

//System Libraries
#include <cstdlib>  //need for srand and seed
#include <iostream> //I/O Library
#include <ctime>    //time function
#include <fstream>  //file stream Library
#include <string>
#include <iomanip>  //format output Library

using namespace std;

//User Library

//Global Constants

//Function Prototypes
bool getWnnr(int, int);
int getRoll();
void Prcnt(int, int, string, string, int);

//Program Execution Begins Here
int main()
{
    //Variables
    int nGames;    //number of games that will be played
    string plyr1, plyr2;
    int sum1, sum2;    //total sum of the 2 dice
    unsigned int game;         //loop counter
    char Choice;
    bool winner; //bool will be true if player 1 has the better roll
    ofstream outFile;      //output file to store game number,winner, and loser
    int countP1, countP2;   //counter for number of times each player wins
    float prcnt;    //percentage of the games won
    
    //Get System Time
    unsigned int seed = time(0);
    //Seed random number generator
    srand(seed);
    //open output file "MexicoRslt.txt"
    outFile.open("MexicoRslt.txt");
    
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
        
        //Initialize win counters to 0
        countP1=0;
        countP2=0;
        
        if(nGames>0)
        {
            cout<<"Game\t\tWinner - Roll\t\tLoser - Roll\n";
            cout<<"-----------------------------------------------------"<<endl;
            //for-loop for number of games
            for(game=1; game<=nGames; game++)
            {
                //do-while loop for as long as players have the same roll
                do  
                {
                    //get dice roll for player 1 from getRoll function
                    sum1=getRoll();
                    //get dice roll for player 2 from getRoll function
                    sum2=getRoll();
                }while(sum1==sum2);
                //Determine winner from getWnnr function
                winner=getWnnr(sum1, sum2);
                //results shown to user if player 1 wins
                if(winner)
                {
                    //results show up as a table to user
                    cout<<setw(4)<<game<<"\t\t"<<plyr1<<setw(8)<<sum1;
                    cout<<"\t\t"<<plyr2<<setw(8)<<sum2<<endl;

                    //store results in output file if player 1 wins
                    outFile<<"Game: "<<game<<endl;
                    outFile<<"Winner: "<<plyr1<<endl;
                    outFile<<"Roll: "<<sum1<<endl;
                    outFile<<"Loser: "<<plyr2<<endl;
                    outFile<<"Roll: "<<sum2<<endl;
                    outFile<<endl;
                    //Keep count of how many times each player1 wins
                    countP1++;
                }
                //results shown to user if player 2 wins
                else
                {
                    cout<<setw(4)<<game<<"\t\t"<<plyr2<<setw(8)<<sum2;
                    cout<<"\t\t"<<plyr1<<setw(8)<<sum1<<endl;

                    //store result in output file if player 2 wins
                    outFile<<"Game: "<<game<<endl;
                    outFile<<"Winner: "<<plyr2<<endl;
                    outFile<<"Roll: "<<sum2<<endl;
                    outFile<<"Loser: "<<plyr1<<endl;
                    outFile<<"Roll: "<<sum1<<endl;
                    outFile<<endl;
                    //increment win counter for player2 for each win
                    countP2++;
                }
            }
        }
        else
        {
            //display error message if user inputs invalid number of games
            cout<<"ERROR. INVALID ENTRY."<<endl;
        }
        //display total # of wins for each player and percentage of wins
        cout<<"\nOut of "<<nGames<<" games,\n";
        cout<<plyr1<<" won "<<countP1<<" times\n";
        cout<<"Out of "<<nGames<<" games,\n";
        cout<<plyr2<<" won "<<countP2<<" times\n\n";
        
        //pass number of player wins to Prcnt function
        Prcnt(countP1, countP2, plyr1, plyr2, nGames);
        
        cout << "\nWant to play again?\n";
        cout << "Enter Y for Yes or N for no and the program will end\n";
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

//getRoll function rolls 2 dice and then returns roll as an int value.
int getRoll()
{
    //Variables
    unsigned int die1, die2; //hold each die value
    int total;  //holds sum of two dice
    
    //roll dice
    die1 = rand()%6+1;  //[1,6]
    die2 = rand()%6+1;  //[1,6]
    //higher die multiplied by 10 then added to lower
    if(die1>=die2)
    {
        die1*=10;
        total = die1+die2;
    }
    else
    {
        die2*=10;
        total = die1+die2;
    }
    //return th total dice roll to main function
    return total;
}

//getWnnr function determines the better roll and return a bool value to main.
bool getWnnr(int throw1, int throw2)
{
    bool win;   //hold true or false
    
    switch(throw1)
    {
        //win by rolling 21, the best roll
        case 21:
            win=true;
            break;
        case 66:
            throw2!=21 ? win=true : win=false;
            break;
            //player1 win by 55 double
        case 55:
            if(throw2!=21 && throw2!=66)
                win=true;
            else
                win=false;
            break;
            //player1 win by rolling 44
        case 44:
            if(throw2!=21 && throw2!=66)
                if(throw2!=55)
                    win=true;
            else
                win=false;
            break;
            //player1 win by rolling 33
        case 33:
            if(throw2!=21 && throw2!=66)
                if(throw2!=55 && throw2!=44)
                    win=true;
            else
                win=false;
            break;
                //player1 win by rolling 22
        case 22:
            if(throw2!=21 && throw2!=66)
                if(throw2!=55 && throw2!=44)
                    if(throw2!=33)
                        win=true;
            else
                win=false;
            break;
       //player1 win by rolling 11(lowest double but better than 65)
        case 11:
            if(throw2!=21 && throw2!=66)
                if(throw2!=55 && throw2!=44)
                    if(throw2!=33 && throw2!=22)
                        win=true;
            else
                win=false;
            break;
        default:
            if(throw2==21)
                win=false;
            else if(throw2==66)
                win=false;
            else if(throw2==55)
                win=false;
            else if(throw2==44)
                win=false;
            else if(throw2==33)
                win=false;
            else if(throw2==22)
                win=false;
            else if(throw2==11)
                win=false;
            else if(throw2>throw1)
                win=false;
            //player1 wins via rolling highest non-double non-21
            //if player2 also doesnt roll double or 21
            else
                win=true;
    }
    //return boolean value of win to main
    return win;
}

//The Prcnt function is a void function that displays which player won a higher
//percentage of the games.
void Prcnt(int num1, int num2, string name1, string name2, int number)
{
    float percent;
    float numWin1, numWin2; //hold # of wins of each player
    numWin1=static_cast<float>(num1);
    numWin2=static_cast<float>(num2);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(numWin1>numWin2)
    {
        percent=(numWin1/number);
        cout<<name1<<" won "<<percent*100<<"% of the games played.\n";
    }
    else if(numWin1<numWin2)
    {
        percent=(numWin2/number);
        cout<<name2<<" won "<<percent*100<<"% of the games played.\n";
    }
    else
    {
        cout<<"Both players won 50% of the games played.\n";
    }
}