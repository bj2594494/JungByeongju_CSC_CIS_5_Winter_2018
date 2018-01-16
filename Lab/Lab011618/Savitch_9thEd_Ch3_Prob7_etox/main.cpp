/* 
 * File:   main.cpp
 * Author: Byeongju Jung
 * Created on January 16, 2018, 1:04 PM
 * Purpose:  e to the x
 */

//System Libraries
#include <iostream>
#include <cmath> // Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE, term, x;
    int counter;
    //Initialize Variables
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Output data
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
    //Exit stage right!
    return 0;
}