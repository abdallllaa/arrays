#include <iostream>
using namespace std;
int main()
{

    int marks[] = {3,5,6,2,1,9,4};
    int b;
    int y[7];
    int Plus = 0;
    
    for(int h = 0; h <  7; h++){
        cout << marks[h] << " ";
    }
    cout <<  endl;
    cout << " enter your element to be searched : ";
    cin >> b;
    for(int i =0;i < 7;i++ ){
         if(b == marks[i]){
                Plus++;
                cout << "element "<< b << " found at position : "<< i << endl;
        }
           
        
    }
    
    if( Plus == 0){
                  cout<<" not found ";     
    }
    return 0;
}
