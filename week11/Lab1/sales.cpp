//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//include fstream
#include<fstream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    ifstream inputFile;
    inputFile.open("sales.txt");
    int buffer = 0;
    int arr[5];
    for (int i = 0; i < 5; i++){
        inputFile>>buffer;
        arr[i] = buffer;
        cout << buffer << endl;
    }
    inputFile.close();
    //return 0 for good ethics of it all.
    return 0;
}
