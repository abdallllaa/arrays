#include <iostream>
#include <cstdlib> //for rand and srand
#include <cstdio>
#include <string>
#include <ctime>

using namespace std;

//declare two string arrays
//one holds the "suit" of the cards, the other hold the "value"
string suit[] = {"Diamonds", "Hearts", "Spades", "Clubs"};
string faceValue[] = {"2", "3", "4", "5", "6", "7", "8", "9", "Ace", "King", "Queen", "Jack"};

//a function that randomly determines the suit and value of a card
string getCard(){
    string card;//a string that represents a card

    //declare two integer variables that create random values
    
        int cardValue = rand() % 13;  //creates values between 0 and 12, for randomly determining the face value of a card

    int cardSuite = rand() % 5;  //creates values between 0 and 4, for determining the suit of a card

    card += faceValue[cardValue]; //Add the face value to the string "card"

    card += " of "; //a divider in-between the card value and suit

    card += suit[cardSuite]; //Add the suit of the card to the string
    
    
    return card;  //output the string
}

int main()
{
    srand(time(0));

   //output the randomly picked card to screen
    cout << "The card you picked is " << getCard() << endl;

//    system("pause");
}
