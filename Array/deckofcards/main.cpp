#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
   const int number_of_cards = 52;
   int deck[number_of_cards];
   
   string suits[] = {"Speads" , "Hearts" , "Diamonds", "Clubs"};
   string ranks[] = {"Ace" , "2" , "3" , "4" , "5" , "6" , "7",
                      "8" ,"9" , "10" ,"jack" ,"Queen", "king"};
    // initialize cards 
    for(int i = 0; i < number_of_cards ; i++){
        deck[i] = i;
    }
    
    // shufll cards 
    srand(time(0));
    
    // generatice number 
    for(int i = 0; i < number_of_cards ; i++ ){
        
        // genertic  in index randomly 
        int index = rand() % number_of_cards;
        int temp =  deck[i];
        deck[i] = deck[index];
        deck[index] = temp;
    }
    
    // display the first  four cards 
    for(int i = 0; i < 4 ; i++){
        
        string suit = suits[deck[i] / 13];
        string rank = ranks[deck[i] % 13];
        cout << " Card Of Number " << deck[i] << " : " << rank << " of " << suit << endl;
    }
    return 0 ; // check is programming Done 
}