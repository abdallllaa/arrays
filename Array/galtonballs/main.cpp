#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
 
    int ballnum;
    int slots;
    int count = 1;
    string direction[2] = {"L", "R"};
    srand(time(0));
    
    
    cout << "Enter number of balls to drop: ";
    cin >> ballnum;
    cout << "Enter number of slots in the bean machine: ";
    cin >> slots;
    

    for (int j = 0; j<ballnum; j++){
        cout << "Ball number " << count <<" : " ;
        for (int i = 0; i<slots-1; i++){
            int r = rand()%2;
            cout<<direction[r];
            }
        count++;
        cout<<endl;
    }
    
    return 0; // programming is done 
}















