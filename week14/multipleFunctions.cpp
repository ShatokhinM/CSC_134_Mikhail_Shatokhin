//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 5. Write a C++ program named multipleFunctions.cpp that use the squareNumber() and averageValues() functions. The program should have a new function named multipleFuncs() that does not take any arguments. The function(when called) should in-turn call both the squareNumber() and averageValues() functions respectively and should pass in the required arguments for these two funcitons. You should store the return values from each function into local variables and print the variable values to the console.//@author: Shatokhin Mikhail


//include the iostream directive
#include<iostream>

//include fstream
#include<fstream>

//using the standart namespace
using namespace std;
//define new function squareNumber
int squareNumber(int num){
    return num * num;
}

//define new function averageValues
double averageValues(int a, int b, int c){
    return (a + b + c) / 3.0;
}
//define new function multipleFuncs
void multipleFuncs(){
    int number;
    cout << "Enter an integer value to square: ";
    cin >> number;
    int squaredValue = squareNumber(number);
    cout << "The squared value is: " << squaredValue << endl;

    int num1, num2, num3;
    cout << "Enter three integer values to average: ";
    cin >> num1 >> num2 >> num3;
    double average = averageValues(num1, num2, num3);
    cout << "The average value is: " << average << endl;   
}
// define the main function
int main(){
    
    //initialize the variables
    multipleFuncs();
    
    //return 0 for good ethics of it all.
    return 0;
}
