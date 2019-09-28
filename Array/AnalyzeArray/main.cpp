 /*
 * c++ programming to analyze array  
*/

#include <iostream>
using namespace std;

int main()
{
    
    const int number_of_elements = 100;
    double numbers[number_of_elements];
    double sum{0};
    
    for(int i = 0 ; i < number_of_elements; i++)
    {
       cout << "enter your anew number ";
       cin >> numbers[i];
       
       // addiation number 
       sum += numbers[i];
    }
    
    // calc avarge
    double avarage = sum / number_of_elements ;
   

    int Count = 0; // this element above  average
    for(int i = 0 ; i < number_of_elements ; i++){
        if(numbers[i] >  avarage){
            Count++;
        }
    } 
    cout << "Average is : "<< avarage <<endl;
    cout << " number of elements : "<< Count <<endl;
    return 0; // check programming is Done 
}











