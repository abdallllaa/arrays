#include <iostream>
using namespace std;

int main()
{

    int x[2][3][2] = {{{1,3},{3,5},{5,4}},
                      {{2,5},{9,4},{5,6}} };    
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++ ){
                cout <<" Element at x[" << i << "][" << j <<  "][" <<  k << "] = " << x[i][j][k] << endl;
            }
        }
    }
    
    
    
}
