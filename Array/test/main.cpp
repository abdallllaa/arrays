#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   char city[30] = "Chicago";
   //   city = "new work ";
   strcpy(city , " new work");    
   cout << " name city  : "<< city << endl; 

   strncpy(city , "New Work" , 5);
   cout << " name city : " << city << endl;
  
   return 0; // check porgamming is Done 
}
