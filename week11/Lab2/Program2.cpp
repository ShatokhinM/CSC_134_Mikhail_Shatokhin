//@author: Shatokhin Mikhail
//@date: 11/3/25
//@purpose: To enable users to input a set of integers and display them in reverse order.
//LucidChart Link: 

//include the iostream directive
#include<iostream>
#include<limits>
//include fstream
#include<fstream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int array[5];
    int reverseArray[5];
    for (int i = 0; i < 5; i++){
        cout << "Enter integer " << i+1 << ": ";
        if(cin.fail()){
            cout << "Invalid input. Please enter an integer;" <<endl;
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            i-=2; // decrement i to repeat this iteration
        }else{
            cin >> array[i];
        }
    }
    for (int i = 4; i >= 0; i--){
        reverseArray[4 - i] = array[i];    
    }
    for(int i = 0; i < 5; i++){
        cout << "You entered: " << reverseArray[i] << endl;
    }
    //return 0 for good ethics of it all.
    return 0;
}
