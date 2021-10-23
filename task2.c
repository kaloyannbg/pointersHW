#include <stdio.h>
#define SIZE 5

void getElements(int *arr, int size);

void copyArray(int *arr1, int *arr2);

void printArray(int *arr);

int main(void)
{

    int arr[SIZE] = { 0 };

    int arr2[SIZE] = {0};

    int *ptr = arr;

    int *ptr2 = arr2;

    getElements(arr, SIZE);

    copyArray(arr, arr2);

    printArray(arr2);

}

void getElements(int *arr, int size)
{

    for (int i = 0; i < SIZE; i++)
    {
        printf(" Enter element No%d: ", i);
        scanf("%d", (arr + i));
    }
}

void copyArray(int *arr1, int *arr2) {

        for (int i = 0; i < SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }
}

void printArray(int *arr) {
        for (int i = 0; i < SIZE; i++)
    {
        printf("Copied arr2[%d] value ----> %d \n", i, *(arr + i));
    }
}