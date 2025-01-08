#include <stdio.h>

int nuGlobal;
// void findArr();

int main()
{
    int n[3];           // define array
    scanf("%d", &n[0]); // input array

    int length = sizeof(n) / sizeof(n[0]);

    for (int i = 1; i < length; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("The large number in array is %d \n", nuGlobal);
}

// void findArr()
// {
//     for (int i = 0; i < 20; i++)
//     {
//         printf("The value of n[%d] is %d \n", i, n[i]);
//     }
// }