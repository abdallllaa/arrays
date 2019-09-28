#include <iostream>
using namespace std;

int main()
{
  const int number_of_students = 8;
  const int number_of_question = 10;
  
  char answer[number_of_students][number_of_question] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };
    
   char keys[] = {'D', 'B' ,'D','C','C','D','A','E','A','D'}; 
    
    // Grade All Answer 
    for(int i = 0; i < number_of_students ; i++){
        
        int correctCount{0};
        for(int j = 0 ; j < number_of_question ; j++ ){
            if(answer[i][j] == keys[j])
             correctCount++;   
    }
        cout << "Student " << i << "'s correct count is " << correctCount << endl;
    }
    
    return 0;
}
