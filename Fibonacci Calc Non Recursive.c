//Print nth Fibonacci number n<47 (non-recursive)
#include <stdio.h>

int FibGetter(int Index);

int main(){

    int F;

    printf("enter desired Fibonacci number less than 46\n");
    scanf("%d",&F);
    //prevent int overflow
    while(F>47 || F<0){
        printf("enter integer between 0 and 47\n");
        scanf("%d",&F);
    }

    printf("the %dth Fibonacci Number is %d\n", F, FibGetter(F));
}


//function takes desired sequence position and returns fibonacci value
int FibGetter(int Index){

    int FibNum,f1=1,f2=1,i;

     //base case
        if(i==1 || i==2 ){
            FibNum=1;
        }

    for(i=3;i<=Index;i++){
            FibNum=f1+f2;

            //update values of f1,f2 and repeat until i=F
            f2=f1;
            f1=FibNum;
    }

    return FibNum;
}
