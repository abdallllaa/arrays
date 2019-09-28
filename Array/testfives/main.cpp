#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int marks[4][1];
//    ?int ;
//    int y[7];
//    int Plus = 0;

   for(int stud = 0; stud < 4; stud++){
       for(int grad = 0; grad < 1 ; grad++){
           
           cout <<" enter student ";
           cin >> marks[stud][grad];
        }
   }
//    for(int i =0 ; i <= 7; i++){
//        for(int u =0 ; u <= 7; u++)
//            if(marks[u] < marks[u+1])
//            swap(marks[u] , marks[u+1]);
//    }
     for(int k =0 ; k <= 4 ; k++){
        for(int h = 0; h < 1; h++){
          cout << marks[k][h] << " ";
                  if(marks[k][h] < marks[k+1][h])
           swap(marks[k][h] , marks[k+1][h]);    
         }
     }
    return 0;
}

