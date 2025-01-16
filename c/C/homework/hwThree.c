#include <stdio.h>

int main()
{
    int arrOne[3];
    int arrTwo[3];
    int i, j;
    int length = sizeof(arrOne) / sizeof(arrOne[0]);
    int size = sizeof(arrTwo) / sizeof(arrTwo[0]);

    printf("Input array one \n");

    for (i = 1; i < length; ++i)
    {
        scanf("%d\n", &arrOne[i]);
    }

    for (j = 0; j < size; j++)
    {
        scanf("%d\n", &arrTwo[i]);
    }

    for (i = 1; i < length; i++)
    {
        printf("Array %d \n", arrOne[i]);
    }

    for (j = 1; i < size; j++)
    {
        printf("Array Two %d \n", arrTwo[j]);
    }

    return 0;
}