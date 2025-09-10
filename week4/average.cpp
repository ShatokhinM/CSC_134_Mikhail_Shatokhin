//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose:  program that allows a user to enter 3 integer values and calculate the average of the values entered
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int num1, num2, num3;
    double average;
    
    //prompt the user to enter 3 integer values
    cout << "Enter 3 integer values: ";
    cin >> num1 >> num2 >> num3;
    
    //calculate the average of the values entered
    average = (num1 + num2 + num3) / 3.0;

    //output the average of the values entered
    cout << "The average of your three numbers is " << average << endl;

    //return 0 for good ethics of it all.
    return 0;
}