//@author: Shatokhin Mikhail
//@date: 09/08/2025
//@purpose: determine if a letter entered by the user is a vowel or a consonant
//LucidChart Link: 

//include the iostream directive
#include<iostream>

//using the standart namespace
using namespace std;

// define the main function
int main(){
    
    //initialize the variables
    char letter;
    
    //prompt the user to enter a letter
    cout << "Enter a letter: ";
    cin >> letter;
    
    //determine if the letter is a vowel or a consonant and output the result
    switch(tolower(letter)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << letter << " is a vowel." << endl;
            break;
        default:
            if (isalpha(letter)) {
                cout << letter << " is a consonant." << endl;
            } else {
                cout << letter << " is not a letter." << endl;
            }
    }


    //return 0 for good ethics of it all.
    return 0;
}