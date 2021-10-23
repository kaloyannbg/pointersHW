/*
10. Напишете програма, която обръща стринг, въведен от клавиатурата,
използвайки указатели.
*/

#include <stdio.h>
#include <string.h>
#include "prots.h"

int main()
{
    char str[100] = {0};

    char *ptr = str;

    printf(" Enter your string: ");

    scanf("%s", ptr);

    int getStringLength = getLengthOfStr(ptr);

    printf(" String length : %d\n", getStringLength);

    stringReverse(ptr, getStringLength);

    printf(" String reversed: ");

    printString(ptr, getStringLength); // printf("%s", ptr);

    return 0;
}