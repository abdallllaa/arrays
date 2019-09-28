#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void swap(int *a , int *b){
    int temp  = *a;
        *a = *b;
        *b = temp;
}
void printArray(int arr[],int n){
    for(int i = 0; i < n ;i++){
         cout << arr[i] << " "; 
    }
    cout << endl;
}

void randomize(int arr[] , int n){
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--)  
    {  
        // Pick a random index from 0 to i  
        int j = rand() % (i + 1);  
  
        // Swap arr[i] with the element  
        // at random index  
        swap(&arr[i], &arr[j]);  
    } 
}
int main()  
{  
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    randomize (arr, n);  
    printArray(arr, n);  
  
    return 0;  
} 
