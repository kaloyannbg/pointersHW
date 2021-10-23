/* 16. Напишете функция-аналог на стандартната С функция strcmp(), като
използвате указатели. */

// strcmp return 0 if the strings are equal.
#include <stdio.h>
#include "prots.h"
#define MAX_LENGTH 200

int kaloStrCmp(char *array1, char *array2);

void printCheckingOfEquals(char *array1, char *array2);

int main()
{
    char str1[MAX_LENGTH] = {0};

    char str2[MAX_LENGTH] = {0};

    char *pStr1 = str1, *pStr2 = str2;

    printf(" Please enter string 1: ");

    scanf("%s", pStr1);

    fflush(stdin);

    printf(" Please enter string 2: ");

    scanf("%s", pStr2);

    printCheckingOfEquals(pStr1, pStr2);

    return 0;
}

int kaloStrCmp(char *array1, char *array2)
{

    int equalSize = (getLengthOfStr(array1) == getLengthOfStr(array2));

    if (!equalSize)
    {
        return -1;
    }
    else if (equalSize)
    {
        for (int i = 0; i < getLengthOfStr(array1); i++)
        {
            if (*(array1 + i) != *(array2 + i))
            {
                return 1;
            }
        }

        return 0;
    }
}

void printCheckingOfEquals(char *array1, char *array2)
{

    int kaloStrCmpResult = kaloStrCmp(array1, array2);

    putchar('\n');

    if (kaloStrCmpResult == 0)
    {
        printf(" -- The strings are equal! Succes! [1:1] -- ");
    }
    else if (kaloStrCmpResult == 1)
    {
        printf(" -- Strings have equal size, but they letters are different! -- ");
    }
    else if (kaloStrCmpResult == -1)
    {
        printf(" -- Strings have different size, they cant be equal! -- ");
    }

    putchar('\n');
}