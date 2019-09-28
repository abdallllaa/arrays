#include <iostream>
#include <algorithm>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    char arr[1] = {'Q'};
    int P = 0;
    for(int i = 0;  i < 9 ; i++){
        //        cout << "|" << arr[r] << "|"<< endl;
        for(int j = 0 ; j < 9; j++){
         int r = 0 + rand() % 9;
    
        if(r != 0 || P == 1){
            
            cout << "| ";
        }else{
            cout << "|" << arr[r] << "";
            
        }
        if(j == 8){
             cout << "|";
            
        }
        
        if( r == 1)    
             P++;       
        }
        cout << endl;
    }
//    cout << arr[0] <<endl;
    cout << endl;   
    return 0;
}
