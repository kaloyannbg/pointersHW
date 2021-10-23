/*
13. Напишете програма, която намира максималния и минималния елементи
в масив, използвай указатели.
*/

#include <stdio.h>
#include "prots.h"

int main()
{

    int array[200] = {0};

    int *pArray = array;

    int size = 0;

    int *pSize = &size;

    printf(" Please, enter how much numbers you want to add: ");

    scanf("%d", pSize);

    numbersInput(pArray, pSize);

    printf(" Min number is : %d  | ", findMin(pArray, pSize));

    printf(" Max number is : %d\n\n", findMax(pArray, pSize));
}