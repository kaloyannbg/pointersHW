/*
7. Напишете програма, която конкатери два стринга, използвайки указатели.
*/

#include <stdio.h>
#include "prots.h"

int main(void)
{
    char array[100] = {0};

    char array2[100] = {0};

    printf(" Please enter first string: ");

    scanf("%s", &array);

    fflush(stdin);

    printf(" Please enter second string: ");

    scanf("%s", &array2);

    stringConcatenation(array, array2);

    printf(" The first array after concatenation is: %s", array);

    return 0;
}