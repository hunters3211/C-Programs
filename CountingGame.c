//determine the outcome of a game where a a stone is dropped in every k spot of a size n line of boxes until a full box is reached
#include <stdio.h>

int main(){

    //user inputs
    int n,k;
    scanf("%d %d", &n,&k);

    int game[n];
    //leave all spots exmpty
    for(int i=0; i<n; i++){
        game[i]=0;
    }

    //stoneNum is the current stone being placed in a box
    int i=0, stoneNum=1;
    while(game[i]==0 && stoneNum<=n){

        //add a stone to the box if the slot is not filled
        game[i]=stoneNum;
        stoneNum++;
        i = (i+k)%n;
    }

    for(i=0;i<n;i++){
        if(game[i]!=0){
            printf("box %d contains stone %d\n", i, game[i]);
        }
    }

}
