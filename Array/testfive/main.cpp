#include <iostream>
using namespace std;
int main()
{
 for(int i =0; i <= 5 ; i++){
     if( i == 0){
          for(int i =0; i <= 10 ; i++){
           cout<<"*";
          }
          cout << endl;
     }
     
     for(int j =0; j <= 10 ; j++){
         if(j == 0 ){
             cout << "*";
         }else if(j > 0 && j < 10){
             cout<<" ";
         }else if( j == 10){
             
             cout << "*";
        }
     }
     
     cout<<endl;
     if( i == 5){
          for(int i =0; i <= 10 ; i++){
           cout<<"*";
          }
          cout << endl;
     }
 }
 
 return 0;
}