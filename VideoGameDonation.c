//Determine how many video games can be bought using donations from test.txt
#include <stdio.h>

#define game 50

int main(){

    FILE *fp = fopen("test.txt", "r");

    int donation=1,sum=0;

    //add donation amounts until the last donation is received (last donation should be 0 in test file)
    while(donation != 0){

        fscanf(fp, "%d", &donation);
        sum=sum+donation;

    }

    printf("you will have %d games and $%d remaining\n", (sum/game), sum%game);

    fclose(fp);
}
