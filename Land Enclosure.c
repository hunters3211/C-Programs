//C Program to find length, width, and perimeter of fence given area and ratio of length to width
#include <stdio.h>
#include <math.h>


int main(){

    //area of fence and ratio of length to width
    float area;
    float ratio[2];

    //read length and ratio
    scanf("%f", &area);
    scanf("%f",&ratio[0]);
    scanf("%f",&ratio[1]);

    //desired values
    float len=area*(ratio[0]/(ratio[1]+ratio[0]));
    float width=area*(ratio[1]/(ratio[1]+ratio[0]));
    float perim=2*len+2*width;

    printf("%0.2f,%0.2f,%0.2f\n",len,width,perim);


}
