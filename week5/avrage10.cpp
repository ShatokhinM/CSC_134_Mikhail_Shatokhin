//@author: Shatokhin Mikhail
//@date: 09/17/2025
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    float count = 0;
    float input;
    //initialize the variables
    for (int i = 0; i < 10; i++){
        cin >> input;
        count += input;
    }

    cout << "avg is: " << count/10;
    //return 0 for good ethics of it all.
    return 0;
}
