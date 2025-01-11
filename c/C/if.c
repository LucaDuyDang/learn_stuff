#include <stdio.h>

int main()
{
    // programing nested;
    int n, i, j, sum;
    printf("Type Input N : \n ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += n;
    }
    printf("Sum is : %d ", sum);

    return 0;
}