//return random permutation of numbers 1 through n
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //size of permutation
    int n;
    scanf("%d", &n);

    int arr[n];

    //pass vals into array
    for(int i=1;i<=n;i++){

        arr[i]=i;

    }

    //loop through each value of the array
    for(int i=1;i<=n;i++){

        //random variable to swap index with current index
        int m=rand() % (n+1);

        //swap arra index values
        int temp = arr[i];
        arr[i]=arr[m];
        arr[m]=temp;

        printf("%d\n",arr[m]);

    }


}
