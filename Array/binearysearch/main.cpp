#include <iostream>
using namespace std;

// function bineary search
int binearysearch(int arr[] , int l , int h , int element ){
    
    while( l <= h){

        int m = (l + h) / 2;
    
        // condiation check m == element   
        if(arr[m] == element){
           
          return m;
            
        }else if(arr[m] > element){
         
           h = m - 1 ;   
        }else{
            
           l = m + 1 ; 
        
        }        
    }
    
    return -1;
}

int main()
{
    // create array 
    int arr[] = { 1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int num;
    cout << "Enter your number : ";
    cin >> num;
   
    int result = binearysearch(arr , 0 , n - 1 , num);

    //conditaion if result equal -1 ;
    if(result == -1){
        cout << "The Number Is : ( " << num << " ) was not found ." << endl;
    }else{
        cout << "The Number Is : ( " << arr[result] << " ) Was Found At Index : ( "<< result <<" ) "<<endl;
    }
}


















