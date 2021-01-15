//Adds 2 nxn matrices from a file
#include <stdio.h>

//change this value to the dimension of the matrices being added
#define dimension 12

int main(){

    FILE *fp = fopen("test.txt", "r");

    //two arrays to represent the matrices
    int M1[dimension][dimension],M2[dimension][dimension];

    //read in first matrix
    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
            fscanf(fp, "%d", &M1[i][j]);
        }
    }
    //read in second matrix
    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
            fscanf(fp, "%d", &M2[i][j]);
        }
    }

    //create sum matrix
    int sum[dimension][dimension];

    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
            //perform matrix addition
            sum[i][j]=M1[i][j]+M2[i][j];
            printf("%d ", sum[i][j]);
        }
        //move to next row
        printf("\n");
    }


}
