#include <stdio.h>

int main()
{
    // int myNum[] = {50, 55, 65, 70, 75};
    // printf("%lu", sizeof(myNum)); => 20
    // int use 4 is usually 4bytes => 4x5 ( 4bytes x 5 elements)=20 bytes

    // int myNum[] = {10, 20, 30, 40, 50};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    // printf("%d", length); // also 5
    //================

    // int myNum[] = {10, 20, 30, 40, 50};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    // int i;

    // for (i = 0; i < length; i++)
    // {
    //     printf("%d\n", myNum[i]);
    // }

    int myNum[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    int j;

    printf("printf size : %zu bytes\n", sizeof(myNum[0]));
    // for (j = 0; j < length; j++)
    // {
    //     printf("%d\n", myNum[j]);
    // }

    /// attention about SIZEOF(ARRAY)
    return 0;
}