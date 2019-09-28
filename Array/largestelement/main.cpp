#include <iostream>
using namespace std;

int main()
{
   int arr[3][3];
   int num_larg=0;
   int X , Y;
   
   // loop to receive value 
   for(int i =0; i < 3; i++){
       cout << " Row IS "<< i << " : ";
    for(int k = 0; k < 3; k++){
        cin >> arr[i][k];
            if( arr[i][k] > num_larg ){
               num_larg = arr[i][k];
               X = i;
               Y = k;
        }    
    }
   }
    cout <<" Largest Is Element  : "<< num_larg << " (" << X << " , " << Y << ") "<< endl;
    return 0;
}
