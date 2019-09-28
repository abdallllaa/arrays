#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
double binary(int number);

int main(){
     
    int coinface[3][3];
    int coincount = 3;
    int usernumber;
    
    // receive value from user 
    cout << "Enter a number between 0 and 511: " << endl;
    cin >> usernumber;
    
    int arrayElements = binary(usernumber);
    for(int i = 0 ;i < coincount; i++){
      for(int j = 0; j < coincount; j++){
         coinface[i][j] = arrayElements % 10;
       }
    }
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < coincount; j++ ){
            if (coinface[i][j] == 0)
            {
                cout << "H";
            }
            else if (coinface[i][j] == 1)
            {
                cout << "T";
            }
            cout << endl;
        }
    }
    return 0;
}
 
double binary(int number)
{
    int remainder;
 
    if(number <= 1)
    {
        cout << number;

    }
    remainder = number % 2;

    binary(number >> 1);   
    cout << remainder << endl;
    return;
}
