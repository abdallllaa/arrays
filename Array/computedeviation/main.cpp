#include <iostream>
#include <cmath>
using namespace std;

// start standard division 
double standardDiv(int Final){
    return sqrt(Final);   
}

int main()
{
    int SIZE;
    int array[] = {600, 470, 170, 430, 300};
    int mean;
    int sum{0};
    int number = sizeof(array) / sizeof(array[0]);  
    
    cout << " NUMBER IS : " << number  << endl; 
    for(int i = 0; i < number ; i++){
      sum += array[i];
  
    }
    cout << " SUM  : " << sum << endl;
    mean =  sum / number;  
    cout << " MEAN IS : " << mean << endl;
    int sqDiff = 0;
    for (int i = 0; i < number; i++)  
        sqDiff += (array[i] - mean) * (array[i] - mean);
          
    int Final = (sqDiff / number);
    cout << " SQDIFF IS : " << Final << endl;
    cout << " Standard DIVISion : " << standardDiv(Final) << endl;
    return 0;
    
}
