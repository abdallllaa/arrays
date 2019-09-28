#include <iostream>
using namespace std;

int main()
{
   const int size_row = 2;
   const int size_col = 5;
   int Sum = 0;
   int matrix[size_row][size_col];    
    
    for(int i = 0; i < size_row ; i++){
         for(int j = 0 ; j < size_col ; j++){
           cin >> matrix[i][j];  
         }   
    }
    
    for(int i = 0; i < size_row ; i++){
         for(int j = 0 ; j < size_col ; j++){
           cout<<  matrix[i][j] << " ";  
         }   
         cout<< endl;
    }
    
    for(int i = 0; i < size_row ; i++)
         for(int j = 0 ; j < size_col ; j++)
           Sum += matrix[i][j];  
           
           
     cout << " Sum IS : "<< Sum << endl; 
    // check your programming is done
    return 0;
}







