//Given 3 values, determine if a triangle could be formed with these side lengths
#include <stdio.h>

int main(){

    FILE *fp = fopen("test.txt" ,"r");

    //Number of triplets to test
    int n;
    fscanf(fp, "%d", &n);

    for(int i=0;i<n;i++){

        //side lengths
        int a,b,c;
        fscanf(fp, "%d %d %d", &a,&b,&c);

        if (a+b > c && a+c > b && b+c > a){
            printf("case %d is a triangle\n",i);
        }
        else
            printf("case %d not a triangle\n", i);

    }

    fclose(fp);

}
