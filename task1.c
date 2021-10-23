#include <stdio.h>
#define SIZE 5

int main(void)
{

    int arr[SIZE] = { 5, 10, 15, 20, 25 };

    for(int i = 0; i < SIZE; i++) {
        printf(" enter No%d: ", i);
        scanf("%d", (arr + i));
    }

    int *ptr = arr;

    for(int i = 0; i < SIZE; i++) {
        printf("arr[%d] value ----> %d \n", i, *(ptr + i));
    }

}