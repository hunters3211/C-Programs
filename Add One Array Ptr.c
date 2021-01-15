//adds one to each element in an array
#include <stdio.h>

//notice
void addOne(int values[], int length);

int main(){

    int length;
    printf("enter length of array\n");
    scanf("%d", &length);

    //fill with user input, could be changed to fill rand()
    int arr[length];
    printf("enter array elements\n");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }

    addOne(arr,length);
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
    }
}

//takes pointer to array and adds one to cur index
void addOne(int values[], int length){

    for(int i=0;i<length;i++){
        values[i]++;
    }

}
