//Checks to see if use qualifies for various scholarships amounts

#include <stdio.h>

int main(){

    double gpa;
    int award,sat;

    scanf("%d", &sat);
    scanf("%lf",&gpa);

    //composite score based on SAT and GPA
    double composite=sat/1000.00 + gpa;

    //Check to see which scholarship bracket the user falls into
    if(composite>=6)
        award=5000;
    else if(composite<6 && composite >=5)
        award = 2500;
    else if(composite<5 && composite >=4)
        award = 1000;
    else
        award = 0;
s
    printf("award is %d", award);
}
