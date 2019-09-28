#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int size;
    
    cout<<" Enter Size :";
    cin >> size;
    
    int mo[size];
    int element;
    
    // loop to receive value index
    for(int i = 0 ; i < size ; i++){
        
        cout << " enter your value : ";
        cin >> mo[i];
      
    }
    
    // Loop To Check Smallest Number Is Array 
    for(int j = 0 ; j < size ; j++){
        
        if(mo[j] < element){
            element = mo[j];
        }
        
    }
    
    // print value in console  
    cout << endl;    
    cout << " The Smallest Number IS : " << element << endl;
    cout << endl;
  
 return 0;   
}









