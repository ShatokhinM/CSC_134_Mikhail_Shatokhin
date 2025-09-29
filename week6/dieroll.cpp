//@author: Shatokhin Mikhail
//@date: 09/24/25
//@purpose: 
//LucidChart Link: 

//include the iostream directive
#include<iostream>
#include<random>
//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    
    srand(time(0));
    cout << time(0);
    //srand(sqrt((rand()%100)%50));
    int random = 0;
    int input = 0;
    cout << "How many rolls? ";
    cin >> input;

    for(int i = 0;i<input;i++){
        random = rand()%6+1;
        cout << "Rolling..."<<endl<< "\t\t" << random << " !"<<endl;
    }
    
        
    //return 0 for good ethics of it all.
    return 0;
}
