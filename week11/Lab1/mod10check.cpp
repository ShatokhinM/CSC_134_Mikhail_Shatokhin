//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;


/*
Note: Test credit card numbers you can use are: 
4012888888881881 
5500000000000004
340000000000009
*/
// define the main function
int main(){
    
    //initialize the variables
    string card_num = "5500000000000004";
    
    cout << "Enter your credit card number: ";
    //cin >> card_num;
    //const int arrLength = card_num.length();
    
    //int card[arrLength];
    int count = 0;
    for (int i = 0; i < card_num.length(); i++){
        //count += int(card_num[i]);
        if(i % 2 == 0){
            count += card_num[i]-'0';
        }else{
            count += (card_num[i]-'0')*2;
        }

        cout << "Number: "<< card_num[i] << endl;
        cout << "Current count: " << count << endl;

    }
    if(count % 10 == 0){
        cout << "Valid credit card number" << endl;
    }else{
        cout << "Invalid credit card number" << endl;
    }
    //return 0 for good ethics of it all.
    return 0;
}
