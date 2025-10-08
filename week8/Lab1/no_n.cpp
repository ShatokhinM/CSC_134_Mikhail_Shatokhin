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
    ifstream inFile; //input file stream
    
    inFile.open("Lab1.txt"); //open the input file
    outFile.open("Lab3.txt"); //open the file

    string line = ""; //string to hold each line
    string templine; //string to hold the modified line

    do{ //loop through the lines
        templine = line; //set the templine to the line
        
        inFile >> line; //read the line
        
        if (templine != line)
            cout << line ; //print the line to the console

    }while(templine != line);

    outFile.close(); //close the file
    inFile.close(); //close the input file
    //return 0 for good ethics of it all.
    return 0;
}
