#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
char matrix[3][3] ={'1','2','3','4','5','6','7','8','9'};
char player = 'x';
void printmatrix(){
    system("clear");
    for(int i =0; i < 3; i++){
        for(int j = 0 ; j <3 ; j++){
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void play(){
    char Pos;
    cout << " choose your position - player ( " << player << " ) : ";
    cin >> Pos;
    for(int i = 0; i < 3 ; i++ ){
        for(int j = 0; j < 3 ; j++){
            if(matrix[i][j] == Pos){
                matrix[i][j] == player;
            }
        }
    }
    if (player == 'x')
        player == 'o';
    else
        player =='x';
    
}
char whowin(){
    int Xc = 0, Oc = 0;
    int counter = 0; 
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            if(matrix[i][j] != 'x' || matrix[i][j] != 'o') counter++;
            if(matrix[i][j] == 'x') {
                Xc++;
            }
            else if( matrix[i][j] == 'o'){
                Oc++;
            }
            if(Xc == 3 || Oc == 3){
                return Xc > Oc ? 'x' : 'o';
            }
        }
        Xc = 0; 
        Oc = 0;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[j][i] == 'x') Xc++;
            else if( matrix[j][i] == 'o') Oc++;
            if(Xc == 3 || Oc == 3){
                return Xc > Oc ? 'x' : 'o';
            }
        }
        Xc = 0; 
        Oc = 0;
    }
    if(matrix[0][0] == 'x'&& matrix[1][1] == 'x' && matrix[2][2] == 'x') return 'x';
    else if(matrix[0][2] == 'x'&& matrix[1][1] == 'x' && matrix[2][0] == 'x') return 'x';
    else if(matrix[0][0] == 'o'&& matrix[1][1] == 'o' && matrix[2][2] == 'o') return 'o';
    else if(matrix[0][2] == 'o'&& matrix[1][1] == 'o' && matrix[2][2] == 'o') return 'o';
    if(counter == 0 ) return 'Z';
    return '.';
}
int main()
{
    while( whowin() == '.'){
        printmatrix();
        play();
    }
     printmatrix();
    if(whowin() == 'Z'){
        cout << "\n No winner !! \n\n" << endl;
    }else{
        cout << "\n the winner is  player ("<< whowin() <<") , congratulation "<< endl;
    }
    return 0;
}
