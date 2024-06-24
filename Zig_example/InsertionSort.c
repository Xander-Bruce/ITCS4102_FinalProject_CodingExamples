#include <stdio.h>

/*
    *-----------------------------------------------------------------
    *
    * Insertion Sort in C
    * Written by Zachary "Xander" Bruce
    *
    * To compile and run this program make sure you have a C compiler
    * installed on your computer, if you do not ensure you find a
    * compiler, i.e. GCC.
    *
    * Once you have a compiler installed (like GCC) use the command
    * line argument:
    *
    *       gcc -o InsertionSort_C InsertionSort.c
    *
    *-----------------------------------------------------------------
*/


#define ARRAY_SIZE 10

void printArray(int *arr, int size);

int main(){

    int arr[ARRAY_SIZE] = {1, 2, 42, 21, 10, 17, 8, 9 ,6, 13};

    int index, key, sortedIndex;

    printf("UNSORTED ARRAY\n");
    printArray(arr, ARRAY_SIZE);

    //Taking in unsorted array and then sorting it
    for(index = 1; index < ARRAY_SIZE; index++){

        key = arr[index];
        sortedIndex = index - 1;

        while(key < arr[sortedIndex] && sortedIndex >= 0)
        {
            arr[sortedIndex + 1] = arr[sortedIndex];
            sortedIndex--;
        }

        arr[sortedIndex + 1] = key;

    }

    printf("SORTED ARRAY\n");
    printArray(arr, ARRAY_SIZE);

    return 0;

}

void printArray(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("Array Index: %d, value: %d\n", i, arr[i]);

    }

}
