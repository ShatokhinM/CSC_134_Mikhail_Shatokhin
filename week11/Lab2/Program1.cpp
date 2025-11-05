//@author: Shatokhin Mikhail
//@date: 11/3/25
//@purpose: To enable users to input a list of integers and find the maximum value from that list.
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
    char buffer = '0';
    for (int i = 0; i < 5; i++){
        cout << "Enter integer " << i+1 << ": ";
        cin >> buffer;
        if(!isdigit(buffer)){
            cout << "Invalid input. Please enter an integer;" <<endl;
            
            i-=1; // decrement i to repeat this iteration
        /*
        if(cin.fail()){
            cout << "Invalid input. Please enter an integer;" <<endl;
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            i-=2; // decrement i to repeat this iteration
        */
        }else{
            array[i] = buffer - '0';
        }
    }
    int max = array[0];

    for(int i = 0; i < 5; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    cout << "The maximum value is: " << max << endl;
    //return 0 for good ethics of it all.
    return 0;
}
