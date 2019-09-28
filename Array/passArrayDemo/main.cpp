#include <iostream>
using namespace std;

void printArray(int list[] ,int  ArraySize );

int main()
{
   int number[5] =  {1,2,3,4,6};
   printArray(number , 5);
    
    return 0;
}

// create function 
void printArray(int list[] , int ArraySize ){
 
   for(int i = 0; i < ArraySize ; i++){
       cout << list[i] << " ";
       
   }
   cout << endl;
}
