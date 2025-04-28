#include <stdio.h>
#include <string.h>

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        if (array[j] % 2 == 0)
        {
            printf("%d is even\n", array[j]);
        }
        else
        {
            printf("%d is odd\n", array[j]);
        }
    }
    return 0;
}