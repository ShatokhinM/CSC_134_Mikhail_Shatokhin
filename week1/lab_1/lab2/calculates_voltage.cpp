//@author: Shatokhin Mikhail
//@date: 09/02/2025
//@purpose: Calculate voltage given current and resistance
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int V;
    int I = 10;
    int R = 2;

    //calculating voltage
    V = I * R;

    //Output the voltage
    cout << V << endl;

    //return 0 for good ethics of it all.
    return 0;
}