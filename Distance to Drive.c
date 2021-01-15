//updates the odometer and fuel level of a car after a trip of a certain distance
#include <stdio.h>

void drive(double* ptrOdom, double* ptrFuel, double mpg, double distToDrive);

int main(){

    //required user inputs
    double odometer,fuel,mpg,dist;

    printf("Enter current mileage, current fuel level in gallons, miles per gallon, and trip distance remaining\n");
    scanf("%lf %lf %lf %lf", &odometer, &fuel, &mpg, &dist);

    drive(&odometer, &fuel, mpg,dist);

    printf("you will have %.02lf miles on the odometer and %.02lf gallons of fuel\n", odometer,fuel);

}

void drive(double* ptrOdom, double* ptrFuel, double mpg, double distToDrive){

    //if the trip is longer than the range of the tank, drive until empty
    if(*ptrFuel<distToDrive){

        //drive until empty
        *ptrOdom=*ptrOdom+*ptrFuel;
        //no fuel
        *ptrFuel=0;
    }

    //trip will not require more fuel than you have
    else if(*ptrFuel>=distToDrive){

        //fuel level after the trip is equal to current fuel level minus amount used on trip
        *ptrFuel=*ptrFuel-(distToDrive/mpg);
        //update odometer with trip dist
        *ptrOdom=*ptrOdom+distToDrive;

    }

}
