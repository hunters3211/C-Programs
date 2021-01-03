//Hunter Smith
//Computer Science 1
//RP 2
//program to search the night sky represented by a bitmap to find "stars"

#include <stdio.h>
#include <string.h>

//can use static arr given m,n<=100
#define MAX 102

//global to avoid having to pass to floodfill
int arr[MAX][MAX];
int visited[MAX][MAX];

//floodfill prototype
int floodfill(int i, int j,int row, int col) ;

int main(void) {

    int row,col,count=1;
    char dataArr[MAX];

    //test cases file
    freopen("CountingStars.in","r",stdin);

    //read in row, col
    while(fgets(dataArr, MAX, stdin)) {

        int t;
        int len = strlen(dataArr);
        row = 0;
        col = 0;


        //num rows
        for(t = 0; dataArr[t] != ' '; t++){
            row = (row * 10) + (dataArr[t] - '0');
            }

        t++;
        //num columns
        for(t;t < len - 1; t++)
               col = (col * 10) + (dataArr[t] - '0');


        //iterate through each row and column with 2 for loops
        for(int i = 0; i < row; i++){
            //read in the row string of # and - and store in dataArr
             fgets(dataArr, MAX, stdin);
             for(int j=0; j < col; j++){

                //black pixel
                if(dataArr[j] == '#')
                   arr[i][j] = 1;

                //white pixel
                else
                    arr[i][j] = 0;

                visited[i][j]=0;
            }
        }


        int starCt = 0;

        //search bitmap iteratively to find stars
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){

                //If pixel has val 0 and has not been checked new star
                if (arr[i][j] == 0 && !visited[i][j]){

                    starCt++;
                    //call floodfill to check all pixels
                    floodfill(i,j,row,col);
                }
            }
        }

        printf("Case %d: %d\n", count,starCt);
        count++;
    }
}

//use floodfill to recursively search through the bitmap and mark each star/non-star point
int floodfill( int i, int j, int row, int col) {
    //base case(s)

    if(i < 0 ||  i> row-1 || j < 0 || j > col-1)
        return 0;

    if(arr[i][j] == 1)
        return 0;

    if(visited[i][j] == 1)
        return 0;

    //mark point
    visited[i][j]=1;

    //check each surrounding point (up,down,right,left)
    floodfill(i+1, j,row,col);
    floodfill(i-1, j,row,col);
    floodfill(i, j+1,row,col);
    floodfill(i, j-1,row,col);

    return 0;
}
