//@author: Shatokhin Mikhail
//@date: 09/02/2025
//@purpose: Calculate force given mass and acceleration
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    float F;
    float m = 10.0;
    float a = 9.81;

    //calculate force
    F = m * a;

    //output the force
    cout << F << endl;

    //return 0 for good ethics of it all.
    return 0;
}