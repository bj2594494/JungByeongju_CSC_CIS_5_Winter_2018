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
const int MX_SIDE=25;
//Function Prototypes
//Function for generating random mines
void mines(int[][],char[][MX_SIDE]);

//Function for generating the game board
void board(char[][MX_SIDE]);

//Function for choosing the difficulty level of the game
void dffclty(); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int length, //side length of the game board
         mines; //number of mines
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

void dffclty(){
    int level;
    cout<<"Please choose the difficulty level."<<endl;
    cout<<"Enter 1 for Beginner (9X9 Board with 10 mines)"<<endl;
    cout<<"Enter 2 for Intermediate (16X16 Board with 40 mines)"<<endl;
    cout<<"Enter 3 for Advanced (24X24 Board with 99 mines)"<<endl;
    cin>>level;
    if(level==1){
        length=9;
    }
}

