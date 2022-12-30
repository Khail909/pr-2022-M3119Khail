#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int main(){

    float *arr1;
    arr1[0] = -3.4;
    arr1[1] = -4.5;
    arr1[2] = -5.6;
    arr1[3] = 6.7;
    for(int i = 0; i < SIZE; i++){
        printf("%.1f ", arr1[i]);
    }
    printf("\n");

    float *arr = malloc(SIZE*sizeof(float));
    arr[0] = -3.4;
    arr[1] = -4.5;
    arr[2] = -5.6;
    arr[3] = 6.7;
    

    for(int i = 0; i < SIZE; i++){
        printf("%.1f ", arr[i]);
    }

    free(arr);
    return 0;
}