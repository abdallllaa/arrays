#include <iostream>
using namespace std;

int main()
{
    int tables[4][3];
    for(int i =0; i< 4; i++){
        cout << " employ "<< i <<" : ";
        for(int k = 0; k < 4; k++){
            cin >> tables[i][k];
        }
    }
    cout << "         set thr rwf rgf fgg hh ree"<<endl;
    for(int i =0; i < 4; i++){
         cout << " employ "<< i <<" : ";
        for(int j =0; j < 3; j++){
             cout << tables[i][j] << " ";
        }
        cout <<  endl;
    }
}
