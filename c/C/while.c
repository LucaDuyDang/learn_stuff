#include <stdio.h>

int main()
{
    int i;
    printf("User Input :\n");
    scanf("%d", &i);
    while (i <= 10)
    {
        printf("Input Number User : %d \n", i);
        i++;
    }

    do
    {
        printf("in do loop %d\n", i);
        i++;
    } while (i < 3);
    return 0;
}