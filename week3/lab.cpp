//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose: calculates and reports what the new average July high temperature would be for each of these cities if temperatures rise by 2 percent
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    double New_York_temp = 85;
    double Denver_temp = 88;
    double Phoenix_temp = 106;
    
    //calculate the new temperatures
    New_York_temp *= 1.02;
    Denver_temp *= 1.02;
    Phoenix_temp *= 1.02;
    
    //output the new temperatures
    cout << New_York_temp << " " << Denver_temp << " "<< Phoenix_temp << endl;
    
    //return 0 for good ethics of it all.
    return 0;
}