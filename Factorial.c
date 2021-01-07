//compute factorial of a number
#include <stdio.h>

int findFactorial(int n);

int main(){

    int num;
    scanf("%d", &num);


    printf("factorial of %d is %d\n", num, findFactorial(num));
}

int findFactorial(int n){

    int factorial=1;

    for(int i=1; i<=n; i++){
        factorial = factorial*i;
    }

    return factorial;

}
