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
    switch(score<0||score>100){
        case true:grade='I';break;
        default:{
            switch(score>=90){
                case true:grade='A';break;
                default:{
                    switch(score>=80){
                        case true:grade='B';break;
                        default:{
                            switch(score>=70){
                                case true:grade='C';break;
                                default:{
                                    switch(score>=60){
                                        case true:grade='D';break;
                                        default:grade='F';
                                    }
                                }
                            }
                        }
                    }
                }
            }
            
        }
    }
    //Output data
    cout<<"Your score = "<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right!
    return 0;
}