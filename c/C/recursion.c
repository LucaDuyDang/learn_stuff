#include <stdio.h>

int sum(int k);

int main()
{
    int reustl = sum(10);

    printf("%d", reustl);

    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}