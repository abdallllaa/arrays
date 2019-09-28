#include <iostream>
#include <ctime>
using namespace std;

 const int number_of_letters = 26;
 const int number_of_randome_letters = 100;
 void creatArray(char []);
 void displayArray(const char []);
 void countletters(const char [], int []);
 void displaycounts(const int []);

int main(){
  // declarr and create an array
  char chars[number_of_randome_letters];     
 
  creatArray(chars);
 
  // display the array
  cout << " the lowercase letter  are: ";
  displayArray(chars);    
 
  // Count the occurrences of each letter
  int counts[number_of_letters];

  // Count the occurrences of each letter
  countletters(chars, counts);
  
  cout<<" \n The occurrences of each letter are : ";
  displaycounts(counts);
  
  cout << endl;
  return 0;
}

// create array in character 
void creatArray(char chars[]){
    
    // Create lowercase letters randomly and assign
    // them to the array
    srand(time(0));
    for(int i = 0; i < number_of_randome_letters; i++){
        chars[i] = static_cast<char>('a' + rand() % ('z' - 'a' + 1));
    }

}
// display charcter  the arrra of charcters
void displayArray(const char chars[]){
    for(int i = 0; i < number_of_randome_letters ; i++){
        if((i + 1) % 20 == 0){
            cout << chars[i] << " " << endl;
        }else{
            cout << chars[i] << " ";
        }
    }
}   

// count letters occurence of each letter 
void countletters(const char chars[] , int counts[]){
   // initialize the array 
   for( int i = 0; i < number_of_letters ; i++ )
      counts[i] = 0;  
    
   // for each lowercase  letter in the  array , count it 
   for( int i = 0; i < number_of_randome_letters ; i++ ){
       counts[chars[i] - 'a'] ++;
   } 
}



// Display counts
void displaycounts(const int counts[])
{
        for (int i = 0; i < number_of_letters; i++)
        {
        if ((i + 1) % 10 == 0)
        cout << counts[i] << " " << static_cast<char>(i + 'a') << endl;
        else
        cout << counts[i] << " " << static_cast<char>(i + 'a') << " ";
        }
}



















