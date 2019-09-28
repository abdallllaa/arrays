#include <iostream>
using namespace std;

// function reverce 
void reverse(int list[] , int Size){
    for( int i = 0 ; i < Size / 2; i++)
    {
       int temp = list[i];   
       list[i] = list[Size - 1 - i];
       list[Size - 1 - i] = temp;
    }
}

int main()
{
    // Creat Array
    int list[] = {1,2,3,4,5};
    int Size = 5; 
    
    // function list and size 
    reverse(list , Size);
    
    // loop  print value array list  
    for(int i = 0; i < Size ; i++){
        cout << list[i] << " ";
    }   
    cout << endl;
   return 0; // check progamming is Done      
}

