//@author: Shatokhin Mikhail
//@date: mm/dd/yyyy
//@purpose: 

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
    string table[4][4];
    bool end_condition = false;
    string buffer;
    int ittirations = 0;
    string outcome = "draw";
    int row = 0;
    int column = 0;
    //create boundaries
    for (int i = 1;i<=3;i++){
        for(int j = 0;j<4;j++){
            table[i][j] = "|"+to_string(i)+"|";    
        }
        buffer = "|||";
        table[0][0] = "|||";
        buffer[1]=static_cast<char>(64+i);
        table[0][i] = buffer;
    }
    //fill the array
    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            table[i+1][j+1]="[ ]";
        }    
    }
    
    //output final board
    for(int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            cout << table[i][j];
        }  
        cout<<endl;  
    }
    //game cyvle
    
    while(!end_condition){
        //take input
        if (ittirations%2==0){
            cout << "Player 1 place an X (A1,B2): ";
        }else{
            cout << "Player 2 place an O (A1,B2): ";
        }
        cin >> buffer;
        
        //interprate the input
        table[stoi(to_string(buffer[0]))-64][int(buffer[1])]="[X]";
        
        
        cout << stoi(to_string(buffer[0]))-64 <<endl;
        cout << buffer[1];
        cout << table[stoi(to_string(buffer[0]))-64][int(buffer[1])]<<endl;
        cout << endl;

        //print the table
        for(int i = 0;i<4;i++){
            for (int j = 0;j<4;j++){
                cout << table[i][j];
            }  
            cout<<endl;  
        }

        //check for end conditions
        ittirations++;
        if(ittirations >= 9){
            end_condition = true;
        }
    }
    cout<< "Game ended in a " << outcome << endl;
    //cout<<to_string(static_cast<char>(65));
    //return 0 for good ethics of it all.
    return 0;
}
