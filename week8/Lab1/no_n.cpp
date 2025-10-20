//@author: Shatokhin Mikhail
//@date: 10/06/2025
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
    ofstream outFile; //output file stream

    outFile.open("Lab1.txt"); //open the file

    outFile << "Bourne IdentityStar Wars Episode IVThe Hunger GamesDead PoolX-Men First ClassStar Wars Espisode VGet Out" << endl; //write to the file

    outFile.close(); //close the file

    //return 0 for good ethics of it all.
    return 0;
}
