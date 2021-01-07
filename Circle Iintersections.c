//Find the number of intersections of 2 circles given their radii and centers
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int numCross(int x1, int y1, int r1, int x2, int y2, int r2);

int main(){

    int X1,Y1,R1;
    int X2,Y2,R2;

    printf("enter x,y,r for first circle\n");
    scanf("%d %d %d",&X1,&Y1,&R1);
    printf("enter x,y,r for second circle\n");
    scanf("%d %d %d",&X2,&Y2,&R2);

    numCross(X1,Y1,R1,X2,Y2,R2);

    printf("number of intersections = %d\n", numCross(X1,Y1,R1,X2,Y2,R2));

}

int numCross(int x1, int y1, int r1, int x2, int y2, int r2) {

    int sqDist = x1*x2+y1*y2;

    // circle do not touch
    if (sqDist >  (r1+r2)*(r1+r2) || sqDist < (r1-r2)*(r1-r2)) return 0;

    // circles touch at a tangent
    if (sqDist == (r1+r2)*(r1+r2) || sqDist == (r1-r2)*(r1-r2)) return 1;

    // Will always be two otherwise.
    return 2;
}




