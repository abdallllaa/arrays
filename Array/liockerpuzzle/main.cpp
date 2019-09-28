#include <iostream>
using namespace std;

int main() {
    int Lockers[101];
    int openLockers;
    int numLockers;
    
    // receive number lockers 
    cout << " enter your number lockers : ";
    cin >> numLockers;
    
    for(int i = 1 ; i <= numLockers ; i++){
        Lockers[i] = 0;
    }
    for(int i = 1; i <= numLockers ; i++){
        for(int j = 1; j <= numLockers; j++ ){
            if(j % i == 0){
                Lockers[j] = 1 - Lockers[j];
                openLockers = 0;
                }
        }
    }
    for(int i = 1 ; i < numLockers ; i++){
        openLockers += Lockers[i];
    }
    cout << "The number of lockers open are " << openLockers << "." <<  endl;

    return 0;
    
}