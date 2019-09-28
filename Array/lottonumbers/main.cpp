#include <iostream>
using namespace std;

int main()
{
 
    bool iscoverd[99];
    int number; // number read form  a file 
    
    // for
    for(int i = 0 ; i < 99 ; i++){
        iscoverd[i] = false;
    }
    
    // read each number  and mark  its correspending 
    cin >> number ;
    while( number != 0){
        iscoverd[number - 1 ] = true;
        cin >> number;
    }
    
    // check all if all coverd 
    bool  allcoverd = true ;
    for(int i = 0 ; i < 99 ; i++){
        if(!iscoverd[i]){
            allcoverd = false; // Find one number not covered
             break;
        }
        
    }
    // Display result
    if (allcoverd)
    cout << "The tickets cover all numbers" << endl;
    else
    cout << "The tickets don't cover all numbers" << endl;
}




