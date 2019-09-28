#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int SIZE;
    
    cout << "|| Enter Numbers Student You Have  : ";
    cin >> SIZE;
    
    string Names[SIZE];
    int ID[SIZE];
    string Depart[SIZE];
    string Team[SIZE];
    char Next{'y'};
    int NUM{0};
   
    while(Next >= SIZE){
     cout << "============ Apply Information card ==========="<<endl; 
     cout << "|| Enter Your Name : ";
     cin >> Names[NUM];
     
     cout << "|| Enter Your ID : ";
     cin >> ID[NUM];
     
     cout << "|| Enter Your Depart  : ";
     cin >> Depart[NUM];
    
     cout << "|| Enter Your Team : ";
     cin >> Team[NUM];
     
    if(NUM == SIZE){}     
     
     NUM++;
    if(NUM == SIZE){
        for(int j = 0 ;  j < NUM  ;j++ ){
          cout << "===========  CARD " <<  <<"==============" << endl;
          cout << "|| your name  is : " << Names[j] << endl;
          cout << "|| your ID Is : " << ID[j] << endl;
          cout << "|| Your Depart IS : " << Depart[j] << endl;   
          cout << "|| Your Team IS : " << Team[j] << endl;
        }
        
        
         break; // out this programming
     }
    }
    
     
    
}









