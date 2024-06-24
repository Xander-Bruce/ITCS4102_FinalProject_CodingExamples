#include <stdio.h>

/*
    *-----------------------------------------------------------------
    *
    * Binary Search Algorithm
    * Written by Zachary "Xander" Bruce
    * Idea used from Feuer and Gehani: https://dl.acm.org/doi/pdf/10.1145/356869.356872
    *
    * To compile and run this program make sure you have a C compiler
    * installed on your computer, if you do not ensure you find a
    * compiler, i.e. GCC.
    *
    * Once you have a compiler installed (like GCC) use the command 
    * line argument:
    *
    *       gcc -o BinarySearch_C BinarySearch.c
    *
    * Then you will be able to run the compiled file
    *
    *-----------------------------------------------------------------
*/

#define FAILURE (-1)
#define ARRAY_SIZE 10

int BinarySearch(int A[], int n, int k){

    int low = 0, high = n - 1, mid;
    while(low <= high){

        mid = (low + high)/2;
        if(k<A[mid]) high = mid - 1;
        else if(k > A[mid]) low = mid + 1;
        else return mid;

    }
    return FAILURE;

}

int main(){

    int A[ARRAY_SIZE] = {10, 5, 8 ,12, 9, 2, 13, 42, 17, 21};
    int targetValue = 5;

    if(BinarySearch(A, ARRAY_SIZE, targetValue) == -1) printf("Value %d, is not in the array!\n", targetValue);
    else printf("Value %d, is in the array!\n", targetValue);

}
