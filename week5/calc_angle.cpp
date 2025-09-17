//@author: Shatokhin Mikhail
//@date: 09/15/2025
//@purpose: Calculate the angle of the right triangle.
//LucidChart Link: 

//include the iostream directive
#include<iostream>
#include<cmath>
#include<iomanip>
//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    int x, y, c;
    double angle;

    //ask the user for the input
    cout << "Enter the lengths of the two legs of the right triangle (x y): ";
    cin >> x >> y;
    

    

    //calculate the angle
    angle = atan2(y, x) * 180 / 3.14159;
    cout << "The angle is: " << fixed << setprecision(2) << angle << " degrees" << endl;
    if ((angle >= 53.130)&&(angle < 53.140)){
        cout << "The angle is approximately 53.13 degrees." << endl;
    }
    /*
    if (angle < 0) {
        angle += 360;
    }

    if (angle > 90) {
        angle = 180 - angle;
    }

    if (angle > 45) {
        angle = 90 - angle;
    }
    */

    //return 0 for good ethics of it all.
    return 0;
}
