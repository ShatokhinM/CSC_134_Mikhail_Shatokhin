//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose:  program that allows a user to enter 3 integer values and calculate the average of the values entered then output the grade correlated to that average
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int num1, num2, num3;
    double average;
    
    //prompt the user to enter 3 integer values
    cout << "Enter 3 grades values: ";
    cin >> num1 >> num2 >> num3;
    
    //calculate the average of the values entered
    average = (num1 + num2 + num3) / 3.0;

    //grade calculation and output
    if ((average >= 90) && (average <= 100)) {
        cout << "Your grade is A" << endl;
    } else if ((average >= 80) && (average < 90)) {
        cout << "Your grade is B" << endl;
    } else if ((average >= 70) && (average < 80)) {
        cout << "Your grade is C" << endl;
    } else if ((average >= 60) && (average < 70)) {
        cout << "Your grade is D" << endl;
    } else if ((average < 60) && (average >= 0)) {
        cout << "Your grade is F" << endl;
    }
    
    //return 0 for good ethics of it all.
    return 0;
}



//        cout << "Your grade is A" << endl;


and &&
or ||






if ((true)(true)){


}



int main(){
    int score =0;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Your grade is A" << endl;
    } else if ((score >= 80 ) && (score < 90) ) {
        cout << "Your grade is B" << endl;
    } else if (score >= 70) {
        cout << "Your grade is C" << endl;
    } else if (score >= 60) {
        cout << "Your grade is D" << endl;
    } else {
        cout << "Your grade is F" << endl;
    }


}