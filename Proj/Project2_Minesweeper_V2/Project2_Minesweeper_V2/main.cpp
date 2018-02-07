/* 
 * File:   main.cpp
 * Author: Byeongju Jung
 * Created on February 5, 2018, 12:13 PM
 * Purpose:  Minesweeper Version 2
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
#include <string>    //String Library
#include <fstream>   //File I/O
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLSMAX=24; //2-D array constant
const int MINESMX=99;
//Function Prototypes

    //Function for creating a board
void flBoard(char [][COLSMAX],int,int,int);
void crBoard(char [][COLSMAX],int,int);
bool CheckIfAllMinesFlagged(char [][COLSMAX],char [][COLSMAX], int, int);


    //Function that will check if the tile that the user choose has a mine
bool ckMine(int, int, char [][COLSMAX]);

    //Function that will check the surrounding tile and give the number of mines
int ckNeigh(int, int, char [][COLSMAX]);

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int ROWSMAX=24;
    char myBoard[ROWSMAX][COLSMAX]; //The board that the players will see
    char rlBoard[ROWSMAX][COLSMAX]; //The actual board with the location of mines
    
    int length, //side length of the game board
         mines; //number of mines
         
    //Initialize Variables
    
    //Set difficulty of he game
    cout<<"Please choose the difficulty level."<<endl;
    do{
        cout<<"Enter 1 for Beginner (9X9 Board with 10 mines)"<<endl;
        cout<<"Enter 2 for Intermediate (16X16 Board with 40 mines)"<<endl;
        cout<<"Enter 3 for Advanced (24X24 Board with 99 mines)"<<endl;
        cin>>length;
    }while(!(length>=1&&length<=3));
    int rows,cols;
    switch(length){
        case 1:rows=cols=9,mines=10;break;
        case 2:rows=cols=15,mines=40;break;
        case 3:rows=cols=24,mines=99;break;
    }
    
    //Fill the array for the board
    flBoard(rlBoard,rows,cols,mines);
    flBoard(myBoard,rows,cols,0);
    
    //Main Game-play Loop
    bool gameOvr = false;
    do {
      //Display the board
      crBoard(rlBoard,rows,cols);
      crBoard(myBoard,rows,cols);
    
      //Get input from user.
      int col, row; //Input row and columns for the user
      char move; //Input user's move
      int neiBor; //Checking/Counting the neighboring tiles
      cout<<"Enter your move. (Row and Column followed by "
          <<"'c' for clicking, and 'f' for flagging)"<<endl;
      cin >> row >> col >> move;
      cin.ignore();
      
      //Check if the tile that the user clicked is mine or not.
      if(move=='c'){
          ckMine(row-1,col-1,rlBoard);
          if ((ckMine(row-1,col-1,rlBoard)==true)){
              cout<<"game over"<<endl;
              gameOvr=true;
          }
          else if ((ckMine(row-1,col-1,rlBoard)==false)){
              neiBor=ckNeigh(row-1,col-1,rlBoard);
              myBoard[row-1][col-1] = '0' + neiBor;
          }
      }
      else if(move=='f'){
          ckMine(row-1,col-1,rlBoard);
          myBoard[row-1][col-1] = 'F';
          
          if( CheckIfAllMinesFlagged(rlBoard, myBoard, rows, cols) ) {
              cout << "You won!" << endl;
              gameOvr = true;
          }
          
      }
    } while( !gameOvr );
        
    //Exit stage right!
    return 0;
}

void flBoard(char array[][COLSMAX],int rows,int cols,int mines){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            array[i][j]='-';
        }
    }
    
    //Add mines.
    for(int i=0;i<mines;i++){
        bool minePcd = false; //To check if the tile already has a mine assigned
        do {
          int col = rand()%cols;
          int row = rand()%rows;
          if( array[row][col] == '-') {
            array[row][col] = '*';
            minePcd = true; 
          }
        } while( ! minePcd ); //Will not place a mine if the tile already has mine
    }
}

void crBoard(char array[][COLSMAX],int rows,int cols){
    cout<<endl;
    cout<<"  ";
    for(int n=0;n<cols;n++){
        cout<<setw(2)<<n+1<<" ";
    }
    cout<<endl;
    for(int i=0;i<rows;i++){
        cout<<setw(2)<<i+1<<" ";
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<"  ";
        }
    cout<<endl;
    }
}

bool ckMine(int row, int col, char array[][COLSMAX]){
    if (array[row][col]=='*'){
        return true;
    }
    else if (!(array[row][col]=='*')){
        return false;
    }
}

int ckNeigh(int row, int col, char array[][COLSMAX]){
    int count=0;
    //Top-Left from tile chosen
    if ( col > 0 && row < 100 ) {
        if( array[row+1][col-1]=='*')
          count++;
    }
    //Top from tile chosen
    if (array[row+1][col]=='*'){
        count++;
    }
    //Top-Right from tile chosen
    if (array[row+1][col+1]=='*'){
        count++;
    }
    //Left from tile chosen
    if (array[row][col-1]=='*'){
        count++;
    }
    //Right from tile chosen
    if (array[row][col+1]=='*'){
        count++;
    }
    //Down-Left from tile chosen
    if (array[row-1][col-1]=='*'){
        count++;
    }
    //Down from tile chosen
    if (array[row-1][col]=='*'){
        count++;
    }
    //Down-Right from tile chosen
    if (array[row-1][col+1]=='*'){
        count++;
    }
    return count;
}

bool CheckIfAllMinesFlagged(char rlBoard[][COLSMAX],
                            char myBoard[][COLSMAX],
                            int rows, int cols)
{
    bool board_cleared = true;
    
    for( int r = 0; r < rows && board_cleared; r++ ) {
        for( int c = 0; c < cols && board_cleared; c++ ) {
            if( rlBoard[r][c] == '*' ) {
                if( myBoard[r][c] != 'F' )
                    board_cleared = false;
            }
        }
    }
    
    return board_cleared;
}
