/*
12. Напишете примерна програма, която връща няколко стойности от
функция, използвайки указател.
*/

#include <stdio.h>
#include <string.h>
#include "prots.h"

int main()
{

    int x = 0, y = 0, z = 0, total = 0;

    int *pX = &x, *pY = &y, *pZ = &z;

    int *pTotal = &total;

    printf(" Enter some integer [x]: ");
    scanf("%d", pX);

    printf(" Enter some integer [y]: ");
    scanf("%d", pY);

    printf(" Enter some integer [z]: ");
    scanf("%d", pZ);

    sumPointerVariables(pX,pY,pZ,pTotal);


}