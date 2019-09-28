#include <stdio.h>
using namespace std;
void selectionSort(int list[], int listSize){
    for(int i = 0 ; i < listSize - 1 ; i++){
        double currentMin = list[i];
        int currentMinIndex = i;
        
        for(int j = i + 1 ; j < listSize - 1 ; j++){
           if(currentMin > list[j]){
               
               currentMin = list[j];
               currentMinIndex = j;
           
           } 
        }
        
        if(currentMinIndex != i){
            
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
        
    }
}
