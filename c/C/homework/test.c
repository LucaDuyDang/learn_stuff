#include <stdio.h>

int main()
{
    int array2d[1][2] = {(3, 4, 5), (6, 8, 9)};
    int size = sizeof(array2d) / sizeof(array2d[0]);
    for (int i = 0; i < size; i++)
    {
        printf("Array 2d %d", array2d[i]);
    }
}