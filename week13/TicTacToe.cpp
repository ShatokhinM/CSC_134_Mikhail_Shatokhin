//@author: Shatokhin Mikhail
//@date: 11/12/2025
//@purpose: Tic Tac Toe smh

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
    int l_table[3][3];

    
    for(int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            l_table[i][j]=0;
        }    
    }

    bool end_condition = false;
    string buffer;
    
    int ittirations = 0;
    string outcome = "draw";
    int row = 0;
    int column = 0;
    
    string x = "[X]";
    string o = "[O]";
    
    
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
        
        //check the input
        if(buffer.length()!=2){
            cout << "Invalid input, try again." << endl;
            ittirations--;
        }else if(buffer[0]<65 || buffer[0]>67 || buffer[1]<49 || buffer[1]>51){
            cout << "Invalid input, try again." << endl;
            ittirations--;
        }else if(l_table[int(buffer[1])-49][stoi(to_string(buffer[0]))-65]!=0){
            cout << "Cell already occupied, try again." << endl;
            ittirations--;
        }else{
            //valid input
            //solidify the input in the table
            if(ittirations%2==0){    
                table[(int(buffer[1])-48)][stoi(to_string(buffer[0]))-64]=x;
                l_table[int(buffer[1])-49][stoi(to_string(buffer[0]))-65]=1;
            }else{
                table[(int(buffer[1])-48)][stoi(to_string(buffer[0]))-64]=o;
                l_table[int(buffer[1])-49][stoi(to_string(buffer[0]))-65]=2;
            }
        }

        cout << "------------------" << endl;
        
        //print the table
        for(int i = 0;i<4;i++){
            for (int j = 0;j<4;j++){
                cout << table[i][j];
            }  
            cout<<endl;  
        }

        //check for end conditions
        if(true){        
            ittirations++;
            
            //check diagonals
            end_condition = ((l_table[0][0]==l_table[1][1] && l_table[1][1]==l_table[2][2] && l_table[0][0]!=0)) || end_condition;
            end_condition = ((l_table[0][2]==l_table[1][1] && l_table[1][1]==l_table[2][0] && l_table[0][2]!=0)) || end_condition;

            for(int i = 0;i<3;i++){
                //check columns
                end_condition = ((l_table[i][0]==l_table[i][1] && l_table[i][1]==l_table[i][2] && l_table[i][0]!=0)) || end_condition;
                //check rows
                end_condition = ((l_table[0][i]==l_table[1][i] && l_table[1][i]==l_table[2][i] && l_table[0][i]!=0)) || end_condition;
                
            }
            
            if (end_condition){
                if (ittirations%2==1){
                    outcome = "win for Player 1";
                }else{
                    outcome = "win for Player 2";
                }
            }
            
            if(ittirations >= 9){
                end_condition = true;
            }
        }
    }
    cout<< "Game ended in a " << outcome <<"!"<< endl;
    
    //return 0 for good ethics of it all.
    return 0;
}
