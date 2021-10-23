/*
9. Напишете програма, която разменя две числа, използвай указатели.
*/

#include <stdio.h>
#include "prots.h"

int main(void)
{

    int x = 0, y = 0;

    int *ptrX = 0, *ptrY = 0;

    ptrX = &x, ptrY = &y;

    printf(" Enter number 1: ");

    scanf("%d", ptrX);

    printf(" Enter number 2: ");

    scanf("%d", ptrY);

    printf("Number1 = %d , number2 = %d\n", *ptrX, *ptrY);

    swapOfTwoNumbers(ptrX, ptrY);

    printf("Number1 = %d , number2 = %d", *ptrX, *ptrY);

}