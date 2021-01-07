//Compute the number of inversions in a size 10 array
#include <stdio.h>

int main(){

    int array[10], inversion=0;

    //user inputs array entries
    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }


    for(int i=0; i<10;i++){

        //compare each entry to the next entries in the array
        for(int j=i+1; j<10; j++){
            if(array[i]>array[j]){
                inversion++;
            }
        }
    }

    printf("num inversion = %d", inversion);
}
