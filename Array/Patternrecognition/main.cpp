#include <iostream>
//#include  <iomanip>
using namespace std;

int main()
{
    int s1;
       
    int Count{1};
    int i{0};
    
    // recive value list 1
    cout << "Enter your Size List1 : ";
    cin >> s1;
    
    int list1[s1];
    for(; i < s1; i++){
       cout << "Index " << i << " : ";
       cin >> list1[i];
        
    }
    // loop check consecutive or no
    for(int j = 0;  j < s1; j++){
       if(list1[j] == list1[j + 1])
          Count++;
    }
    
    if(Count == 4 ){
        cout << " The list has consecutive fours " << endl;     
    }else{
        cout << " The list has no consecutive fours " << endl;
    }
    
    return 0; // Check Programming Is Done 
}






