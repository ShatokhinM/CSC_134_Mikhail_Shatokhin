//@author: Shatokhin Mikhail
//@date: 09/02/2025
//@purpose: Calculate distance travelled given speed and time and calculate speed given distance and time
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int v = 80;
    int t = 2;
    int x;

    //calculate distance
    x = v * t;

    //output the distance
    cout << x << endl;

    //restate new values
    x = 400;
    t = 4;

    //calculate speed
    v = x / t;

    //output the speed
    cout << v << endl;

    //return 0 for good ethics of it all.
    return 0;
}