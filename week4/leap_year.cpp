//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose: determain if the year entered by the user is a leap year
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int year;

    //prompt the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

    //determine if the year is a leap year and output the result
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "The year you entered " << year << " is a leap year." << endl;
    } else {
        cout << "The year you entered " << year << " is not a leap year." << endl;
    }
    

    //return 0 for good ethics of it all.
    return 0;
}