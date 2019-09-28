#include <iostream>
using namespace std;

int main()
{
    int mat1[4][3];
    int mat2[4][3];
    int mat3[4][3];
    
    cout << "Enter matrix one : " << endl;
    for(int i = 0; i < 4; i++){
        cout << " index  "<< i <<" : ";
        for(int k = 0; k < 3; k++){

            cin >> mat1[i][k];
        }
    }
    
    cout << "Enter matrix two : " << endl;
    for(int i = 0; i < 4; i++){
        cout << " index  "<< i <<" : ";
        for(int k = 0; k < 3; k++){
            cin >> mat2[i][k];
        }
    }
    
//    cout << "Enter matrix one : " << endl;
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 3; k++){
            mat3[i][k] = (mat1[i][k] * mat2[i][k]);
        }
    }
    
     for(int i = 0; i < 4; i++){
         cout << " Index  "<< i <<" : ";
        for(int j = 0; j < 3; j++){
             cout << mat3[i][j] << " ";
        }
        cout <<  endl;
    }
}
