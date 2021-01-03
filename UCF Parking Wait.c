//Estimate waiting time for a parking spot at UCF Campus

#include <stdio.h>
#include <stdlib.h>

int main(){

    //declare time, spots, and permits given
    float time, spots, permits;
    scanf("%f %f %f", &time,&spots,&permits);

    //formula to estimate wait
    float wait=((12-abs(12-time))*(permits/spots));

    printf("%0.2f minutes", wait);



}
