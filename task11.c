/*
11. Напишете програма, която сортира масив, въведен от клавиатурата,
използвайки указатели.
*/

#include <stdio.h>
#include <string.h>
#include "prots.h"

int main()
{

    int array[100] = { 0 };

    int *ptr = array;

    int len = 0;

    int *pLen = &len;

    printf(" Please enter how much numbers you want to add: ");

    scanf("%d", pLen);

    numbersInput(ptr, pLen);

    bubbleSort(ptr, pLen);

    printIntArray(ptr, pLen);

}