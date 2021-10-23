/*
8. Напишете програма, която събира две числа, използвайки указатели.
*/

#include <stdio.h>
#include "prots.h"

int main(void)
{

    int x = 0, y = 0;

    int *ptrX = 0, *ptrY = 0;

    ptrX = &x, ptrY = &y;

    int result = 0;

    printf(" Enter number 1: ");

    scanf("%d", ptrX);

    printf(" Enter number 2: ");

    scanf("%d", ptrY);

    sumOfTwoNumbers(ptrX, ptrY, &result);

    printf("%d + %d = %d", *ptrX, *ptrY, result);

    return 0;
}