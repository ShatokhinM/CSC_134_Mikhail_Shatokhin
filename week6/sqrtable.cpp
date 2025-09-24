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
    int minNum = 0;
    int maxNum = 100;
    
    cout<< "NUMBER\t|\tNUMBER SQUARED"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i = minNum;i<=maxNum;i++){
        
        cout<< i << "\t|\t" << i*i <<endl;

    }
    //return 0 for good ethics of it all.
    return 0;
}
