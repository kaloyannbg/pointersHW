/*
14. Напишете програма, която да изчисли факториал на дадено число,
използвайки указатели
*/

#include <stdio.h>
#include "prots.h"

int main(void)
{

    int number = 0;

    int *pNumber = &number;

    int fact = 1;

    int *pFact = &fact;

    printf("Please enter number for find factorial: ");

    scanf("%d", pNumber);

    factorial(pNumber, pFact);

    printf(" Factorial of %d is %d", *pNumber, *pFact);

    return 0;
}