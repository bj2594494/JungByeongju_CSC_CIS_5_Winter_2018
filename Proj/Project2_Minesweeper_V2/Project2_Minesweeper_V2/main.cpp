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
//Function Prototypes
//Function for creating a board
void crBoard(int [][COLSMAX],int,int);
void flBoard(int [][COLSMAX],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int ROWSMAX=24;
    int myBoard[ROWSMAX][COLSMAX]; //The board that the players will see
    int rlBoard[ROWSMAX][COLSMAX]; //The actual board with the location of mines
    
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
        case 1:rows=cols=9;break;
        case 2:rows=cols=15;break;
        case 3:rows=cols=24;break;
    }
    
    //Fill the array for the board
    flBoard(myBoard,rows,cols);
    //Display the board
    crBoard(myBoard,rows,cols);
    //Exit stage right!
    return 0;
}

void flBoard(int array[][COLSMAX],int rows,int cols){
    cout<<"  ";
    for(int n=0;n<cols;n++){
        cout<<n+1<<" ";
    }
    cout<<endl;
    for(int i=0;i<rows;i++){
        cout<<i+1<<" ";
        for(int j=0;j<cols;j++){
            array[i][j];
        }
    cout<<endl;
    }
}

void crBoard(int array[][COLSMAX],int rows,int cols){
    cout<<endl;
    cout<<"  ";
    for(int n=0;n<cols;n++){
        cout<<n+1<<" ";
    }
    cout<<endl;
    for(int i=0;i<rows;i++){
        cout<<i+1<<" ";
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<" ";
        }
    cout<<endl;
    }
}

