#include <iostream>
//#include  <iomanip>
using namespace std;

int main()
{
    int s1;
    int s2;
    int list1[s1];
    int list2[s2];
    int Sum1{0};
    int Sum2{0};
    
    // recive value list 1
    cout << "Enter your Size List1 : ";
    cin >> s1;
    
    for(int i = 0 ; i < s1; i++){
       cout << "Index " << i << " : ";
       cin >> list1[i];
       Sum1 += list1[i]; 
    }
    
    // recive value list 2;
    cout << "Enter your Size List1 : ";
    cin >> s2;
    
    for(int j = 0 ; j < s2; j++){
       cout << "Index " << j << " : ";
       cin >> list2[j];
       Sum2 += list2[j]; 
    }
    
    // sum 
    if(Sum1 == Sum2){
        cout << " Two lists are identical " << endl; 
    }else{
        cout << " Two lists are not identical " << endl;  
    }
    return 0; // Check Programming Is Done 
}