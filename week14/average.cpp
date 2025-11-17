//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 3. Write a C++ program named average.cpp that averages three integer values. The program should call a function named averageValues() that takes the three integer values and calculates their average. The function should return the average values and print the result to console. Do not print from the function---you should print the values from the main() function

//include the iostream directive
#include<iostream>

//include fstream
#include<fstream>

//using the standart namespace
using namespace std;
//define new function averageValues
double averageValues(int a, int b, int c){
    return (a + b + c) / 3.0;
}
// define the main function
int main(){
    
    //initialize the variables
    int num1, num2, num3;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;
    double average = averageValues(num1, num2, num3);
    cout << "The average value is: " << average << endl;   
    //return 0 for good ethics of it all.
    return 0;
}
