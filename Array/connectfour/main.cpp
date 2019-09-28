#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;
int Position;
string arr[4][4] = {"| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |","| |"};
    
void printgame(){
    for(int i = 0; i< 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int recevie_value(int Position){
    
    if(arr[3][Position] == "| |"){
     
      arr[3][Position] = "|Y|"; 
       
    }else if(arr[3][Position] == "|Y|"){
       
       arr[2][Position] = "|Y|";
 
    } 
    if(arr[2][Position] == "| |"){
       
       arr[1][Position] = "|Y|";
    
    } 
    if(arr[1][Position] == "| |"){
        arr[1][Position] = "|Y|";
    }
    
     return 0; 
}

int main()
{
    int Position , Count = 0;    

    while( Count <= 7){
        
    cout << "enter value position here : ";
    cin >> Position;

    recevie_value(Position);
       printgame();
       Count++;
    }
 

    return 0;
}









