#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
  // difnation varibels 
  int arr[10] = {2,4,5,6,7,8,9,0,3,1};
  int n = sizeof(arr) / sizeof(arr[0]); 
  int MAX , MIN;  
  
    // loop check min number and max number   
    for(int i = 0; i < n ; i++ ){
        
        if( arr[i] > MAX )
            MAX = arr[i];
        
        if( arr[i] < MIN)
            MIN = arr[i];
    }
    // print array before swapping from user   
    cout << " Array : ";
    
    for(int i = 0; i < n ; i++ ){
        cout <<  arr[i] << " ";        
    }
    
    cout << endl;
    
    // swap min & max number 
    swap(MIN , arr[0]);
    swap(MAX , arr[9]);
    // print arrau after swapping from user 
    cout << " Array : ";
    for(int i = 0; i < n ; i++ ){
        cout <<  arr[i] << " ";        
    }
    cout << endl;
   
   return 0; // check number is done  
}
