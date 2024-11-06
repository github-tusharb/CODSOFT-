#include<iostream>
#include<vector>
using namespace std;
const int SIZE=3;
vector<vector<char>>board(SIZE,vector<char>(SIZE,' '));
char currentplayer ='X';

void initializeBoard(){
    for(int i=0; i<SIZE; ++i){
        for (int j = 0; j <SIZE; ++j)
        {
            board[i][j]= ' ';
        }
    }
}

void displayBoard(){
    system("clear");
    cout<<" 1 2 3\n";
    for (int i = 0; i <SIZE; ++i)
    {
        cout<< i+1<<" ";
        for (int j = 0; j < SIZE; ++j)
        {
            cout<< board[i][j];
           if (j<SIZE-1)cout<<"|";
        }
        cout<<"\n";
        if(i<SIZE-1){
            cout<<" -----\n";
        }
    }
}

bool isMoveValid(int row,int col){
    return row>=0 && row<SIZE && col>=0 && col<SIZE && board[row][col]== ' ';
}
bool checkWin(){
    for (int i = 0; i < SIZE; ++i)
    {
        if ((board[i][0]== currentplayer && board[i][1]== currentplayer && board[i][2]== currentplayer)||
         (board[0][i]== currentplayer && board[1][i]== currentplayer && board[2][i]== currentplayer))
        return true;
    }

         if ((board[0][0]== currentplayer && board[1][1]== currentplayer && board[2][2]== currentplayer)||
             (board[0][2]== currentplayer && board[1][1]== currentplayer && board[2][0]== currentplayer)){
            return true;
             }
             return false;
}
bool checkDraw(){
    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
        if( board[i][j]==' '){
            return false;
            }
        }
    }
    return true;
}

void switchPlayer(){
    currentplayer =( currentplayer=='X') ? 'O':'X';
}
bool makeMove(int row,int col){
    if(isMoveValid(row,col)){
        board[row][col]=currentplayer;
        return true;
    }
return false;
}

int main() {
    bool playAgain =true;
    while(playAgain){
        initializeBoard();
        bool gameWon= false;
        bool gameDraw = false;

        while(!gameWon && !gameDraw){
            displayBoard();
            int row,col;
            cout<<"player "<<currentplayer<<" ,Enter your move (row and column): ";
            cin>>row>>col;
            row-=1;
            col-=1;

            if(makeMove(row,col)){
                gameWon=checkWin();
                if(!gameWon){
                    gameDraw=checkDraw();
                }
                if(!gameWon&&!gameDraw){
                    switchPlayer();
                }
            }else{
                cout<<"Invalid move . please Try again.\n";
            }
        }
        displayBoard();
        if(gameWon){
            cout<<"Player "<<currentplayer<<" Wins!\n";
        }else if (gameDraw){
            cout<<"the game is a draw.\n";
        }

        cout<<"Do you want to play again? (y/n): ";
        char response;
        cin>>response;
        playAgain =(response=='y'|| response=='Y');
    }
    cout<<"......Thank you for playing.... \n";

return 0;
}
