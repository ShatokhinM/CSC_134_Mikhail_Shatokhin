//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose: determine if a number entered by the user is even or odd
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int num;

    //prompt the user to enter an integer value
    cout << "Enter an integer value: ";
    cin >> num;

    //determine if the number is even or odd and output the result
    if (num % 2) {
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is even." << endl;
    }

    //return 0 for good ethics of it all.
    return 0;
}