#include <iostream>
#include <algorithm>
//#include <stri?ng>
using namespace std;

// craete function 
void printDistinct(int Array[] , int N ){
    
    //pick all elements one by one 
    for(int i = 0; i < N ; i++){
      int j;
     for(j = 0; j < i ;j++)
         if( Array[i] == Array[j])
             break;
       
       // if noe printed earlier , then  print it;
     if(i == j)
         cout << Array[i] << " ";
      
    }
    
}

// Function Driver
int main()
{
//    int Size;?
    int Array[] = {10,31,13,31,4,3,5,7,12,32,43};
    int n = sizeof(Array) / sizeof(Array[0]);
//    cout << "Enter your size array : ";
//?
//    int MO = sizeof(Array);
//    int mo = sizeof(Array[0]);
//    cout << " number is : "<< n << endl; 
//    cout << " MO is : "<< MO << endl; 
//    cout << " mo is : "<< mo << endl;
//     
//   for(int i = 0; i < Size ; i++){
//       cout << " enter your value array here : ";
//       cin >> Array[i];
//   } 
 
    
    printDistinct( Array ,  n); 

    return 0;
    
}










