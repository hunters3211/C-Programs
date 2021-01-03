//Turn based game where each player takes 1,2, or 3 marbles from a pile of 32. The objective is to take the last marble.
#include <stdio.h>

void gamePlay(int marblesAmount);

int main(){

    int marblesAmount=32;
    gamePlay(marblesAmount);

}

//function to let players play and determine winner
void gamePlay(int marbleAmt){

    while(marbleAmt>0){

        //stores how many marbles player wants to remove
        int temp;

        //player 1 turn
        printf("player 1 turn\n");
        scanf("%d", &temp);
        //checks to make sure player does not remove more marbles than are in the game or remove an invalid amount
        while(marbleAmt<temp || temp>3 || temp<1){
            printf("invalid input please try again\n");
            scanf("%d",&temp);
        }
        marbleAmt=marbleAmt-temp;
        printf("Amt remaining: %d\n", marbleAmt);

        if(marbleAmt==0){
            printf("player 1 wins\n");
            break;
        }

        //player 2 turn
        printf("player 2 turn\n");
        scanf("%d", &temp);
        while(marbleAmt<temp || temp>3 || temp<1){
            printf("invalid input please try again\n");
            scanf("%d",&temp);
        }
        marbleAmt=marbleAmt-temp;
        printf("Amt remaining: %d\n", marbleAmt);

        if(marbleAmt==0){
            printf("player 2 wins\n");
            break;
        }
    }
}
