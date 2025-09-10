//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    bool stat1 = true;
    bool stat2 = false;

    if ((stat1) && (stat2)){
        cout << "Both are true" << endl;
    } else if ((stat1) || (stat2)){
        cout << "At least one is true" << endl;
    } else {
        cout << "Both are false" << endl;
    }

    //return 0 for good ethics of it all.
    return 0;
}
