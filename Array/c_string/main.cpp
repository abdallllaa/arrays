#include <iostream>
using namespace std;

// unsigned function 
unsigned strnl(char s[]);

int main()
{
    // array value chars city 
    char city[7];
    cout << " enter your Name City : ";
    
    // read to array city 
    cin.getline(city, 30 , '\n');
    
    // print result name city  
    cout<<" your name city is  : " << city << endl;
}
unsigned strnl(char s[]){
    
    int i = 0 ;
    for(; s[i] != '\0'; i++);
    return i;
}

