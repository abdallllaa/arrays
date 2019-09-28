#include <iostream>
using namespace std;

// void function 
void m( int x ,  int y[]){
    x = 3;
    y[0] = 3;
    
}

int main()
{

  int number = 0; 
  int numbers[1];
  m(number, numbers);
  
  cout << " number is : " << number << endl; 
  cout << " numbers is  :" << numbers[0] << endl;
    
  return 0; // check progamming is Done 
   
}
