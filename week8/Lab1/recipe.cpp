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

    string starline;

    //star line
    for (int i = 0; i < 40; i++) {
        starline += "*";
    }
    starline += "\n";

    outFile.open("Lab2.txt"); //open the file

    outFile << starline << "\t\t\tShopping Cart\n"<< starline << "product code\tqty\tprice\n\t789\t7\t$12.00\n\n\t\t\t\t\t\tTotal: $84.00" << endl; //write to the file

    outFile.close(); //close the file

    //return 0 for good ethics of it all.
    return 0;
}
