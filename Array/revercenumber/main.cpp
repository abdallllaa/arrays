#include <iostream>
using namespace std;

int main()
{
    
   int array[10];    
    for(int i = 0; i <= 10 ; i++){
        cout << " enter your value ";
        cin >> array[i];
        
    }
    
    for(int j = 10 ; j >= 0; j--){
        
        cout << array[j] << " ";
        
    }
    cout << endl;
    return 0;
    
    
}
