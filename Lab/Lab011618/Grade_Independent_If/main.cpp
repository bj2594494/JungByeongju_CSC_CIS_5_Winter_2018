/* 
 * File:   main.cpp
 * Author: Byeongju Jung
 * Created on January 16, 2018, 9:59 AM
 * Purpose:  Grade with an If statement
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
    
    if(score<   0||score> 100)grade='I';
    if(score>= 90&&score<=100)grade='A';
    if(score>= 80&&score<  90)grade='B';
    if(score>= 70&&score<  80)grade='C';
    if(score>= 60&&score<  70)grade='D';
    if(score>=  0&&score<  60)grade='F';
    
    //Output data
    cout<<"Your score = "<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right!
    return 0;
}