//perform various operations on a struct storing dollar and cent values
#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int dollars;
    int cents;
}money;

void add(money amt1, money amt2);
void difference(money amt1, money amt2);


int main(){

    money amt1,amt2;
    int choice=0;

    printf("enter amount 1 dollars\n");
    scanf("%d", &amt1.dollars);

    printf("enter amount 1 cents\n");
    scanf("%d", &amt1.cents);

    printf("enter amount 2 dollars\n");
    scanf("%d", &amt2.dollars);

    printf("enter amount 2 dollars\n");
    scanf("%d", &amt2.cents);

    //user enters 3 to indicate they are done
    while(choice!=3){

        printf("enter 1 to add amounts, enter 2 to subtract amounts, enter 3 to quit\n");
        scanf("%d", &choice);

        if(choice==1){
            add(amt1,amt2);
        }

        if(choice==2){
            difference(amt1,amt2);
        }

    }
}

//takes in user structs and returns sum as a new struct
void add(money amt1, money amt2){

    money sum;

    sum.cents=(amt1.cents+amt2.cents)%100;
    sum.dollars=amt1.dollars+amt2.dollars;

    //if the sum of cents is more than 1 dollar
    if(amt1.cents+amt2.cents>=100){
        //add one to the dollar amount
        sum.dollars++;
    }
    printf("the sum of the two values is %d.%d\n",sum.dollars,sum.cents);
}

//takes in user structs and returns difference as a new struct
void difference(money amt1, money amt2){

    money difference;

    difference.cents=(abs(amt1.cents-amt2.cents));
    difference.dollars=abs(amt1.dollars-amt2.dollars);

    printf("the difference of the two values is %d.%d\n",difference.dollars,difference.cents);
}
