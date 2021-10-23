/*
6. Напишете програма, която намира дължината на въведен от клавиатурата
стринг, използвайки указатели.
*/

#include <stdio.h>
#include "prots.h"
#define LENGTH 50

void main()
{

    char string[LENGTH] = { 0 };

    printf(" Enter string: ");

    scanf("%s", &string);

    printf(" String: %s , Length: %d", string, getLengthOfStr(string));
}