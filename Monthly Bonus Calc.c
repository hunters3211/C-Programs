//Finds monthly bonus given to an employee based on sales
#include <stdio.h>

int main(){

    int amtSold;

    //User tells how many items employee sold
    scanf("%d",&amtSold);

    int bonus;

    //Conditions to decide bonus amount
    if(amtSold>20)
        bonus=300+amtSold*40;
    else if(amtSold>10 && amtSold<=20)
        bonus=100+amtSold*20;
    else if(amtSold<10 && amtSold>0)
        bonus=10*amtSold;
    else if(amtSold==0)
        bonus=0;
    //error check
    else{
        printf("invalid amount");
        return 0;
    }

    printf("bonus = %d", bonus);
}
