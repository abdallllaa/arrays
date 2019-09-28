#include <iostream>
using namespace std;

int main()
{

  int Size;
  cout << " Enter your Size array  : ";
  cin >> Size;
  
  // create arrey 
  int arra[Size];
  int Max = 0 ;
  
  int i = 0;
  for(; i < Size ; i++){
   cout << " Enter your value here : ";
   cin >> arra[i]; 
       if(arra[i] > Max)
           Max = arra[i];   
   }

//   for(int j = 0; j < Size; j++){
//    
//   }
   
    cout << " Max number Is : "<< Max << endl;
  
}
