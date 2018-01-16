/* 
 * File:   main.cpp
 * Author: Byeongju Jung
 * Created on January 16, 2018, 10:20 AM
 * Purpose:  Grade with an Dependent If statement
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
    if(score<0)       grade='I';
    else if(score>100)grade='I';
    else if(score>=90)grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else grade='F';
    //Output data
    cout<<"Your score = "<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right!
    return 0;
}