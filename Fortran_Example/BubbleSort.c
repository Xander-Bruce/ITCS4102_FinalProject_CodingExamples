
#include <stdio.h>

/*
//--------------------------------------------------------------------------------
//Program Written by: Zachary "Xander" Bruce
//To Compile this program make sure you have a C compiler installed on you machine
//Then input this command:
//
//  gcc -o BubbleSort BubbleSort.c
//
//---------------------------------------------------------------------------------
*/

#define n 10

int main(){

    int arr[n] = {20,10, 2, 15, 45, 7, 8, 12, 1, 10};
    int swaps;

    printf("Unsorted Array: ");
    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i] );
    }
    printf("\n");

    while(swaps >= 1){

        swaps = 0;

        for(int i = 1; i < n; i++){

            if(arr[i-1] > arr[i]){

                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                swaps++;

            }

        }

    }

    printf("Sorted Array: ");
    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i] );
    }
    printf("\n");

    return 0;
}
