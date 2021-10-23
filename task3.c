/*
3. Напишете програма, която разменя елементите на два еднакви по размер
масива, използвайки указатели.
*/

#include <stdio.h>
#define SIZE 5

void printArray(int *array, int size);

void swapArray(int *array1, int *array2, int size);

int main()
{
    int array1[SIZE] = {6, 7, 8, 9, 10};

    int array2[SIZE] = {1, 2, 3, 4, 5};

    int *pointer1 = array1, *pointer2 = array2;

    printArray(array1, SIZE);

    printArray(array2, SIZE);

    swapArray(array1, array2, SIZE);

    printArray(array1, SIZE);

    printArray(array2, SIZE);

    return 0;
}

void printArray(int *array, int size)
{
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf(" array[%d] -> %2d | ", i, array[i]);
    }

    printf("\n");
}

void swapArray(int *array1, int *array2, int size)
{
    int temp = 0;

    for (int i = 0; i < SIZE; i++)
    {
        temp = *(array1 + i);
        *(array1 + i) = *(array2 + i);
        *(array2 + i) = temp;
    }
}