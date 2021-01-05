//Find the average, max, and min scores from a test file without use of arrays
#include <stdio.h>

int main(){

    FILE *fp = fopen("test.txt", "r");

    int i,n, sum=0,minScore=100,maxScore=0;
    int maxScoreIndex,minScoreIndex;
    fscanf(fp, "%d", &n);

    for(i=0;i<n;i++){
        int score;
        //scans the first line of file to read how many scores
        fscanf(fp, "%d", &score);

        if(score<minScore){
            minScore=score;
            minScoreIndex=i;
        }

        if(score>maxScore){
            maxScore=score;
            maxScoreIndex=i;
        }
        sum=sum+score;
    }

     // Print the average.
    printf("The average test score is %.2lf.\n Max was %d in spot %d\n min was %d in spot %d\n", (double)sum/n,maxScore,maxScoreIndex,minScore,minScoreIndex);

    // Close the file.
    fclose(fp);
    return 0;

}
