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
    int arr[5];
    int sum = 0;
    for (int i = 0; i<5;i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "The sum of the array elements is: " << sum << endl;

    //return 0 for good ethics of it all.
    return 0;
}
