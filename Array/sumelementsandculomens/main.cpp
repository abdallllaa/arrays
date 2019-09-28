// c++ programming ti find of each sum row and columns
#include <iostream>
using namespace std;

 #define m 4
 #define n 4
void row_sum(int arr[m][n]){
    
    int i , j , sum = 0;
    
    cout << "\nFinding Sum of each row:\n\n";  
    // finding the row sum 
    for (i = 0; i < 4; ++i) { 
        for (j = 0; j < 4; ++j) { 
            // Add the element 
            sum = sum + arr[i][j]; 
        } 
        cout << "Sum of the row " << i << " = " << sum << endl;
        sum = 0;
}
}
void col_sum(int arr[m][n]){
      int i , j , sum = 0;
    
    cout << "\nFinding Sum of each row:\n\n";  
    // finding the row sum 
    for (i = 0; i < 4; ++i) { 
        for (j = 0; j < 4; ++j) { 
            // Add the element 
            sum = sum + arr[j][i]; 
        } 
        cout << "Sum of the row " << i << " = " << sum << endl;
        sum = 0;
    }
}

int main()
{
    


    int i,j; 
    int arr[m][n]; 
  
    // Get the matrix elements 
    int x = 1; 
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            arr[i][j] = x++; 
  
    // Get each row sum 
    row_sum(arr); 
  
    // Get each column sum 
    col_sum(arr); 
  
    
    return 0;
}
