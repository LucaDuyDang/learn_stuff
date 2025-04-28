#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct scanBinary
{
    int secOne;
    float secTwo;
    float secThree;
    float secFour;
    int agingNumber;
    char oderName[50];
    char authorName[50];
};

void checkBinary();

int main()
{
    printf(" Hello");
    struct scanBinary input;

    printf("Adding Number Below\n");

    // Adding Function to call out the info
    printf("SecOne\n");
    scanf("%d", &input.secOne);

    printf("SecTwo\n");
    scanf("%f", &input.secTwo);

    printf("SecThree\n");
    scanf("%f", &input.secThree);

    printf("SecFour\n");
    scanf("%f", &input.secFour);

    printf("insert oderName\n");
    scanf("%s", &input.oderName);

    printf("Insert authorName\n");
    scanf("%s", &input.authorName);

    // for (int i = 0; i < 5; i++)
    // {
    //     if (input.secOne / 2 == 0)
    //     {
    //         printf("It's even");
    //     }
    // }
    // else
    // {
    //     printf("It's odd")
    // }
    printf("One %d ,\n Two %.1f ,\n Three %.1f ,\n Four %.1f ,\n Oder %s, \n Author %s. \n", input.secOne, input.secTwo, input.secThree, input.secFour, input.oderName, input.authorName);

    return 0;
}

void checkBinary()
{
}
