#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
 
int main(){
     // Varibels And Array
     int list1[5];
     int list2[5];
     int N = sizeof(list1) / sizeof(list1[0]);
     int R{0};
    // Receive Value List One 
    cout<<"========== LIST ONE ==========" << endl;
    for(int j =0 ; j < 5; j++){
          
        cout << "Enter Your Value Index " << j << " : ";
        cin >> list1[j];
    }
    // Receive Value List Two  
    cout<<"========== LIST TWO ==========" << endl;
    for(int k =0 ; k < 5; k++){
          
        cout << "Enter Your Value Index " << k << " : ";
        cin >> list2[k];
    }
    // Check Two Array Is Equal 
     for(int i = 0 ; i < 5; i++){
        if(list1[i] == list2[i])
           R++;
           
          
     }
    //  Check Is Identical Or No 
    if( R == N ){
        cout << "Two lists are strictly Identical" << endl;
    }else{
        cout << "Two lists are strictly  Not Idnetical  " << endl;
    }
    
    return 0;
}
