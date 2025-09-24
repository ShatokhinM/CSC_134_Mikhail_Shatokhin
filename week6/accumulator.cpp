//@author: Shatokhin Mikhail
//@date: 09/24/25
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int accumulator = 0;

    //
    
    for(int i = 0;i<100;i++){
        accumulator += i;

    }    

    cout<<"The sum of the first 100 integers is: "<< accumulator <<endl;
    //return 0 for good ethics of it all.
    return 0;
}
