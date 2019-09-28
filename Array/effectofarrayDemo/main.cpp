#include <iostream>
#include <string>
using namespace std;

// function prototype
void m(int , int []);

int main()
{

    int x = 1;
    int y[10];
    y[0] = 1; // initalziy  m with arguments  x and y;
    
    m(x , y);
    
    cout << " x is : " << x << endl;
    cout << " y is : "<< y[0] << endl;
   
   return 0;
   
}

// create fuction 
void m(int number,  int numbers[]){
    number = 1001;
    numbers[0] = 5555;
}