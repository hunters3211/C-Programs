//PrimeChecker
#include <stdio.h>

int primeChecker(int n);

int main(){

    int num;

    printf("enter number to check if prime\n");
    scanf("%d", &num);

    if(primeChecker(num)){
        printf("prime\n");
    }

    else
        printf("not prime\n");
}

int primeChecker(int n){

    //1 is prime
    if(n==1){
        return 0;
    }

    //check for factors up to n
    else if(n>1)
        for(int i=2; i<n; i++){
            if(n%i==0){
                return 0;
            }
        }

    //no factors found
    return 1;
}
