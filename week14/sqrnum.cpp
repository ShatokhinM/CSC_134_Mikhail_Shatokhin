//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 2. Write a C++ program named squareNum.cpp that prompts the user for an integer value. You should pass the integer value into a function name squareNumber(). After the number is squared, you should return the squared value and print it to the console from the main() function of the program.

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

// define the main function
int main(){
    
    //initialize the variables
    int number;
    cout << "Enter an integer value: ";
    cin >> number;
    int squaredValue = squareNumber(number);
    cout << "The squared value is: " << squaredValue << endl;
        
    //return 0 for good ethics of it all.
    return 0;
}
