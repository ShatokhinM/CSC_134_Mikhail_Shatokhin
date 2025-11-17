//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 4. Write a C++ program named loop.cpp that implements a function named loop(). The loop() function should take an integer argument less than 1000. The function should use either a classic for-loop or a range-based for-loop to iterate until the integer value is reached(e.g. if you pass in 100, you should loop 100 times).  

//include the iostream directive
#include<iostream>

//include fstream
#include<fstream>

//using the standart namespace
using namespace std;
//define new function loop
void loop(int limit){
    for(int i = 0; i < limit; i++){
        cout << "Iteration: " << i + 1 << endl;
    }
}

// define the main function
int main(){
    
    //initialize the variables
    int number;
    cout << "Enter an integer value less than 1000: ";
    cin >> number;
    if(number < 1000){
        loop(number);
    } else {
        cout << "Please enter a number less than 1000." << endl;
    }
        
    //return 0 for good ethics of it all.
    return 0;
}
