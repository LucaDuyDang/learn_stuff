#include <stdio.h>

int main()
{
    // int myNum[] = {50, 55, 65, 70, 75};
    // printf("%lu", sizeof(myNum)); => 20 // int use 4 is usually 4bytes => 4x5 ( 4bytes x 5 elements)=20 bytes
    //==========================================================================

    // int myNum[] = {10, 20, 30, 40, 50};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    // printf("%d", length); // also 5
    //==========================================================================

    // int myNum[] = {10, 20, 30, 40, 50};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    // int i;

    // for (i = 0; i < length; i++)
    // {
    //     printf("%d\n", myNum[i]);
    // }
    //==========================================================================
    int myNum[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int length = sizeof(myNum) / sizeof(myNum[0]);
    int j;

    printf("printf size : %lu bytes\n", sizeof(myNum[0])); // can use %zu ; %lu ; %d
    // for (j = 0; j < length; j++)
    // {
    //     printf("%d\n", myNum[j]);
    // }

    // attention about SIZEOF(ARRAY)
    //==========================================================================
    // test element char

    // insert a character array (string) print string out with loop (for/do,while)
    // char i[10] = "LucaDang";

    // for (int j = 0; j <= 8; j++)
    // {
    //     printf("My name is %s \n", i);
    // }
    //==========================================================================
    // int twoD[2][3] = {{3, 5, 6}, {2, 4, 7}};
    // twoD[0][1] = 11;          // change elements in 2d array

    // printf("%d", twoD[0][1]); // print [array source]; [second column]
    // loop through 2d array
    int twoDloop[1][2] = {{1, 4, 2}, {3, 6, 8}};
    int e, r;

    for (e = 0; e < 2; e++)
    {
        for (r = 0; r < 3; r++)
        {
            printf("%d\n", twoDloop[e][r]);
        }
    }

    return 0;
}