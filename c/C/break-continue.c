#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d \n", i);
        if (i < 6)
        {
            printf("condition fails\n");
        }
    }

    printf("line================\n");

    int j;
    for (j = 0; j < 10; j++)
    {
        if (j == 7)
        {
            break;
        }
        printf("%d\n", j);
    }

    return 0;
}