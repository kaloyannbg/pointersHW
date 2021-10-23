/*
4. Напишете програма, която обръща местата на елементите в един масив,
използвайки указатели.
*/

#include <stdio.h>
#include "prots.h"
#define SIZE 5

int main(void) {

    int array[SIZE] = { 10, 20, 30, 40, 50};

    printf("First print: ");

    printArray(array, SIZE);

    arrayReverse(array, SIZE);

    printArray(array, SIZE);

    return 0;
}


