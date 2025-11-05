//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
/*@purpose: 1. Apply what you just learned concerning range based for-loops to write a C++ program that does the following:

    - Use the algebraic equation for a straight line y = mx + b to draw a two quadrant graph for positive x and y values. Your graph should be drawn with the y-axis having at least 15 values and your x-axis with 15 values. Let m = 2 and b = 3 and your x values should be from 0 -4. Your program should plot the graph accordingly.

     - You should use at least one range based for-loop in your program and the program should plot the straight line on the graph using an "X" to mark the point. An example of the graph is below:
*/
//include the iostream directive
#include<iostream>

//include fstream
#include<fstream>
#include<string>
//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    string table[15][15];
    int m = 2;
    int b = 3;

    //fill the table with axes
    for(int i = 0; i < 15; i++){
        table[i][0] = (to_string(15-i)+((15-i<10)?" ":"")+"|");
        table[14][0] = "  ";
        table[14][i+1] = "|"+to_string(i);
    }
    //fill everything else with spaces
    for(int i = 1;i < 14;i++){
        for(int j = 1;j < 14;j++){
            table[i][j] = "   ";
        }
    }
    //add the line
    //plot the line y = mx + b

    for(int x = 0; x <= 4; x++){
        int y = m*x + b;
        if(y <= 14){
            table[14 - y][x + 1] = " X ";
        }
    }
    //print the table
    for(int i = 0;i < 15;i++){
        for(int j = 0;j < 15;j++){
            cout << table[i][j]; 
        }
        cout << endl;
    }

    //return 0 for good ethics of it all.
    return 0;
}
