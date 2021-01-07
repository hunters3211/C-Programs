//multiplication game
//enter number of problems to complete and maximum number to multiply, play game
#include <stdio.h>
#include <stdlib.h>

int multGame(int numProblems, int maxNumber);

int main(){

    int probCt=0,maxVal=0;

    //get user inputs
    printf("enter number of multiplication problems\n");
    scanf("%d", &probCt);
    printf("enter maximum value to use in a problem\n");
    scanf("%d", &maxVal);

    //multGame returns number of correct responses
    printf("number of correct responses = %d\n", multGame(probCt,maxVal));



}

int multGame(int numProblems, int maxNumber){

    //keep track of correct answers
    int counter=0;

    for(int i=0; i<numProblems;i++){

        //x,y are random integers up to maxnum which will be multiplied
        int x=rand()%(maxNumber+1);
        int y=rand()%(maxNumber+1);
        int ans;

        printf("what is %d x %d\n", x,y);
        scanf("%d",&ans);

        if(ans==(x*y)){
            counter++;
        }

    }
    return counter;
}
