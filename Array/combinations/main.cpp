#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
    int Sum;
    int list[10];
    srand( time(0) );
    
     // loop to receivee value index
    for(int i = 0; i < 10; i++){
        cout << " Index " << i << " : ";
        cin >> list[i];
    }
    
    int N1 = rand() % 9;
    int N2 = rand() % 9;
    
    if(N1 != N2){
    Sum = list[N1] + list[N2];
    }else{
        int N1 = rand() % 3;
        int N2 = rand() % 3;
        if(N1 != N2){
         Sum = list[N1] + list[N2];
        }
    }
    cout << " List N1 : " << list[N1] << endl;
    cout << " List N2 : " << list[N2] << endl;  
    cout <<" List Sum : "<< Sum << endl;
	return 0;
    
}
