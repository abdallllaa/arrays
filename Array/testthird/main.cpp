#include <iostream>
#include <algorithm>
using namespace std;

// function bobble sort 
void bobblesort(int arr[] , int n){
    for(int i = 0; i < n -1 ; i++ ){
        
        for(int j = 0 ;  j < n-i-1; j++)
        {
           if(arr[j] > arr[j + 1]){
               
               swap(arr[j] , arr[j + 1]);
           }    
        }
        
        
    }
}

// function print array 
void printArray(int arr[] , int s){
    for(int i = 0; i < s ; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
     int SIZE;
     int arr[SIZE];
     cout << "Enter Size Array Number : ";
     cin >> SIZE;
    for(int i = 0; i < SIZE ; i++){
        cout <<" Enter value index  "<< i << " : ";
        cin >> arr[i];
    }; 
   
     int N = sizeof(arr) / sizeof(arr[0]);
     bobblesort(arr , SIZE);  
     printArray(arr, SIZE);
     cout << endl;
     return 0;

}






















