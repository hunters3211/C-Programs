//determine if a given number has the same digit in the "tens" and "units" digit spots
#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    //check if value in tens and ones place are the same
    if(num%10==(num/10) %10)
        printf("same digit");
}
