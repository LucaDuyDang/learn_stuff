#include <stdio.h>

int main()
{
    int n[3];                             // tạo int mảng
    printf("input 3 numbers\n");          // y/c input
    scanf("%d", &n[0]);                   // user input
    int count = sizeof(n) / sizeof(n[0]); // tạo vòng count qua sizeof
    for (int i = 1; i < count; i++)       // vòng lặp scan
    {
        scanf("%d", &n[i]);
    }

    // int *val = &n[0];
    for (int j = 0; j < count; j++)
    {
        printf("Number input is %d\n", n[j]);
    }
}