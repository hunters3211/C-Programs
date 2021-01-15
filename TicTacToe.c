//tic tac toe
#include <stdio.h>

//indexes of the 3x3 board
#define m 3
#define n 3

//function protoypes
void playerTurn(int game[][n]);
int checkDiagonal(int game[][n]);
int checkRowsAndCols(int game[][n]);
int checkFill(int game[][n]);

int main(){

    //create mxn (3x3) board
    int board[m][n];

    //Set all spaces on the board equal to zero
    //for(int i=0; i<3;i++){
        //for(int j=0; j<3;j++){
        //    board[i][j]=0;
      //  }
    //}
    //Calls the function to play the game
    playerTurn(board);

}

//Takes player input as a coordinate and marks the board, if the board is full or a player has won, the game will end
void playerTurn(int game[][n]){

    int gameOver=0;

    while(gameOver==0){

        //acts as "x's and o's"
        int p1=1,p2=2;
        //player coordinates
        int x,y;

        printf("Player 1 enter coordinate\n");
        scanf("%d %d", &x,&y);
        //Assigns player one their desired coordinate. account for index shift
        game[x-1][y-1]=1;

        //Check to see if player 1 has won
        if(checkDiagonal(game)==1||checkRowsAndCols(game)==1){

            printf("player 1 wins\n");
            //printf("%d",checkDiagonal(game));
            gameOver=1;
            break;
        }

        //check if board is full
        if(checkFill(game)==1){

            printf("Tie\n");
            printf("%d", checkFill(game));
            gameOver=1;
            break;
        }

        printf("Player 2 enter coordinate\n");
        scanf("%d %d", &x,&y);
        //Assigns player two their desired coordinate. account for index shift
        game[x-1][y-1]=2;

        //Check to see if player 2 has won
        if(checkDiagonal(game)==1||checkRowsAndCols(game)==1){

            printf("player 2 wins\n");
            gameOver=1;
            break;
        }

        //check if board is full
        if(checkFill(game)==1){

            printf("Tie\n");
            gameOver=1;
            break;
        }
    }

}

//take game array in current state and return 1 if a diagonal win occured
int checkDiagonal(int game[][n]){

    int check = 0;

    //check forward diagonal
    for(int i=0; i<m; i++){
        if(game[i][i]==game[i+1][i+1])
            check++;
    }
    //3 in a row
    if(check==m){
        return 1;
    }

    check=0;

    //check reverse diagonal
    for(int i=0; i<m; i++){
            if(game[i][2-i]==game[2-i][i])
                check++;
        }

    //3 in a row
    if(check==m){
        return 1;
    }

    //no match found
    return 0;
    }

//take game array in current state and return 1 if a horizontal or vertical win occured
int checkRowsAndCols(int game[][n]){

    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){

            //check for win by same row
            if(game[i][j]==game[i+1][j] && game[i][j]==game[i+2][j]){
                return 1;
            }

            //check for win by same column
            if(game[i][j]==game[i][j+1] && game[i][j]==game[i][j+2]){
                return 1;
            }
        }
    }
}

//check if board is filled
int checkFill(int game[][n]){

    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(game[i][j]!=1 && game[i][j]!=2){
                //board is not full
                return 0;
            }
        }
    }
    //board is full
    return 1;
}
