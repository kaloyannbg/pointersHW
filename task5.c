/*
5. Напишете програма за търсене на определен елемент в даден масив,
използвайки указатели.
*/

#include <stdio.h>
#include "prots.h"
#define SIZE 5


int main(void) {

    int array[SIZE] = { 0 };

    int *ptr = array;

    getArrayFromUser(ptr, SIZE);

    printArray(ptr, SIZE);

    searchInArray(ptr, SIZE);

}
