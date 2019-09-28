#include <iostream>
#include <algorithm>
using namespace std;

// create function convert decimal to binary 
void decToBin(int n){
    int binary_number[32];
    int i = 0;
    while( n > 0){
        
        binary_number[i] = n % 2;
        n = n / 2;
        i++;
    }
     for (int j = i - 1; j >= 0; j--) 
         cout << binary_number[j] << " ";
}
int main()
{

    int n;
    cout << " enter your number to convert : ";
    cin >> n;
    decToBin(n);
    return 0;
}