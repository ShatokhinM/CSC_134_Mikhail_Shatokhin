//@author: Shatokhin Mikhail
//@date: 08/30/2025
//@purpose: Demonstrate division by zero error
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int num = 10;

    //output the result of dividing num by 0
    cout << num / 0 << endl;

    //return 0 for good ethics of it all.
    return 0;
}