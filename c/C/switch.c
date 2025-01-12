#include <stdio.h>

int main()
{
    int day = 5;
    switch (day)
    {
    case 1:
        printf("Day one");
        break;
    case 2:
        printf("Day two");
        break;
    case 3:
        printf("Day three");
        break;
    case 4:
        printf("Day four");
        break;
    case 5:
        printf("Day five");
        break;
    case 6:
        printf("Day six");
        break;
    case 7:
        printf("Day seven");
        break;
    default:
        printf("Weekend");
    }
    return 0;
}