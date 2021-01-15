#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 5

void playGame(int gameBoard[][size]);

int main(){

    int board[size][size];

    srand(time(0));
    //initialize array with random elements less than 5
    for(int i=0; i<size;i++){
        for(int j=0;j<size;j++){
            board[i][j] = rand() % size;
        }
    }

    //let the starting point be a valid spot
    board[0][0]=1;

    playGame(board);
}

//function will check if player has moved to legal spot and print the final score
void playGame(int gameBoard[][size]){

    int i=0,j=0,score=0;
    while(gameBoard[i][j]!=0 && gameBoard[i][j]!=4){

        //player enters move in the form of a text
        int move;

        printf("player enter 1='left', 2='right' 3='up', or 4='down' to make move\n");
        scanf("%d", &move);

        //move left
        if(move==1){

            //move to the left in the array
            i--;
            //check if new spot is illegal
            if(gameBoard[i][j]==0 || gameBoard[i][j]==4){
                break;
            }
            score=score+gameBoard[i][j];

        }

        //move right
        if(move==2){

            //move to the righ in the array
            i++;
            //check if new spot is illegal
            if(gameBoard[i][j]==0 || gameBoard[i][j]==4){
                break;
            }
            score=score+gameBoard[i][j];
        }

        //move up
        if(move==3){

            //move up in the array
            j--;
            //check if new spot is illegal
            if(gameBoard[i][j]==0 || gameBoard[i][j]==4){
                break;
            }
            score=score+gameBoard[i][j];
        }

        //move down
        if(move==4){

            //move down in the array
            j++;
            //check if new spot is illegal
            if(gameBoard[i][j]==0 || gameBoard[i][j]==4){
                break;
            }
            score=score+gameBoard[i][j];
        }

        //reached array index 4,4 you win
        if(i==4 && j==4){
            printf("you win\n");
        }

    }
    printf("Final score: %d\n", score);
}
