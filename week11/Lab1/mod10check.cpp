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
    string card_num = "";
    
    cout << "Enter your credit card number: ";
    cin >> card_num;
    const int arrLength = card_num.length();
    int card[arrLength];
    for (int i = 0; i < card_num.length(); i++){
        card[i] = card_num[i];
        cout << card[i] << endl;
    }
    //return 0 for good ethics of it all.
    return 0;
}
