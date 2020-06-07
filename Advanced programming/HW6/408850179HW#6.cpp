#include<iostream>

using namespace std;

class TicTacToe{
    private:
        char board[4][4] = {{'\\','1','2','3'}, {'1',' ',' ',' '}, {'2',' ',' ',' '}, {'3',' ',' ',' '}};
        bool turns = true;
        int win = 0;
        int moves = 0;
    public:
        TicTacToe();
        void showBoard();
        void play();
        void theWinnerIs();
};
TicTacToe::TicTacToe(){}
void TicTacToe::showBoard(){
    for(int  i=0;i<4;i++){//array height
        for(int j=0;j<4;j++){//array width
            cout << board[i][j] << ' ';
        }
           cout << endl;
    }
}
void TicTacToe::play(){
    int x;
    int y;
    do{
        for(int  i=0;i<4;i++){//array height
            for(int j=0;j<4;j++){//array width
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
        if(turns == true){
            cout << "Player 1 now is your turn!" << endl;
        }else{
            cout << "Player 2 now is your turn!" << endl;
        }
        cout << "Please enter a number to represent the row you choose!" << endl;
        cin >> x;
        cout << "\n" << "Please enter a number to represent the column you choose!" << endl;
        cin >> y;
        cout << "\n";
        if(x == 0 || y == 0 || x >=4 || y >=4){
            cout << "Please choose the RIGHT place in the BOARD to draw." << endl;
        }else if(turns == false && board[x][y] == 'O'){
            cout << "NO! you're not cheese that out." << endl;
        }else if(turns == true && board[x][y] == 'X'){
            cout << "NO! you're not cheese that out." << endl;
        }else{
            if(turns == false){
                board [x][y] = 'X';
                turns = true;
                moves++;
            }else{
                board [x][y] = 'O';
                turns = false;
                moves++;
            }
        }
        if(board[1][1] == 'O' && board[1][2] == 'O' && board[1][3] == 'O'){
            win = 1;            
        }else if(board[2][1] == 'O' && board[2][2] == 'O' && board[2][3] == 'O'){
            win = 1;
        }else if(board[3][1] == 'O' && board[3][2] == 'O' && board[3][3] == 'O'){
            win = 1;            
        }else if(board[1][1] == 'O' && board[2][1] == 'O' && board[3][1] == 'O'){
            win = 1;            
        }else if(board[1][2] == 'O' && board[2][2] == 'O' && board[3][2] == 'O'){
            win = 1;            
        }else if(board[1][3] == 'O' && board[2][3] == 'O' && board[3][3] == 'O'){
            win = 1;
        }else if(board[1][1] == 'O' && board[2][2] == 'O' && board[3][3] == 'O'){
            win = 1;
        }else if(board[1][3] == 'O' && board[2][2] == 'O' && board[3][1] == 'O'){
            win = 1;
        }else if(board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X'){
            win = 2;
        }else if(board[2][1] == 'X' && board[2][2] == 'X' && board[2][3] == 'X'){
            win = 2;
        }else if(board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X'){
            win = 2;
        }else if(board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X'){
            win = 2;
        }else if(board[1][2] == 'X' && board[2][2] == 'X' && board[3][2] == 'X'){
            win = 2;
        }else if(board[1][3] == 'X' && board[2][3] == 'X' && board[3][3] == 'X'){
            win = 2;
        }else if(board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X'){
            win = 2;            
        }else if(board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X'){
            win = 2;            
        }else if(moves >=8){
            win = 3;
        }
    }while(win == 0);
}
void TicTacToe::theWinnerIs(){
    if(win == 2){
        cout << "The winner is Player 2 ." << "\n"
        << "Congratulation!!" << endl;
    }else if(win == 1){
        cout << "The winner is Player 1 ." << "\n"
        << "Congratulation!!" << endl;
    }else{
        cout << "It's a tie! There is no winner, please rematch." << endl;
    }
}
int main(){
    TicTacToe test1;

    test1.play();
    test1.theWinnerIs();

    return 0;
}