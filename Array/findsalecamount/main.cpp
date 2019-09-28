#include <iostream>
#include <iomanip>

using namespace std;

int binarysearch(double[],int,double );
int main()
{
    
    double commn_target = 250000;
    double intialize_salesamount = 0.01;
    double commission = 0;
    double salesamount = intialize_salesamount;
    double arr[1000];
    int I = 0; 
    
    do
    {
    
        salesamount += 3000;    
        arr[I++] = salesamount;
        if(salesamount >= 10000.01){
           
          commission = 5000 * 0.08 + 5000 * 0.1 + (salesamount - 10000) * 0.12;
        
        }else if(salesamount >= 5000.01){
            
          commission = 5000 * 0.08 + (salesamount - 10000) * 0.10;
            
        }else {
            
          commission = salesamount * 0.08;  
        
        }
    }while( commission < commn_target);
    

    int p = binarysearch(arr,I,salesamount);
     
    double salesamount1 = (salesamount * 100 / 100.0); 
   
    cout << " The Sales Amount :"; 
    cout << salesamount << endl;
    cout << " It Postion Is : ";
    cout << p <<  endl;
    cout <<" target commission IS : ";
    cout << commission << endl;
   
    system("PAUSE");

    return 0; // Check Programming Is Done 
}















