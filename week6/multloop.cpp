//@author: Shatokhin Mikhail
//@date: 09/29/25
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int input = 0;
    
    //input
    cout << "Input: ";
    cin >> input;
    

    for(int i = 0;i <= 12;i++){
        cout << i <<" * "<< input<<" = "<<input*i<<endl;    
    }
    //return 0 for good ethics of it all.
    return 0;
}
