/* 
 * File:   main.cpp
 * Author: Byeongju Jung
 * Created on January 16, 2018, 10:38 AM
 * Purpose:  Grade with a switch case
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short score;
    char grade;
    
    //Initialize Variables
    cout<<"This program gives you a grade"<<endl;
    cout<<"Type in an integer score from 0 to 100"<<endl;
    cin>>score;
    
    //Process/Map inputs to outputs
    switch(score/10){
        case 10:score==100?grade='A':grade='I';break;
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='C';break;
        case 6:grade='D';break;
        case 5:case 4:case 3:case 2:case 1:grade='F'; break;
        case 0:score<0?grade='I':grade='F';
        default: grade='I';
    }
    //Output data
    cout<<"Your score = "<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right!
    return 0;
}