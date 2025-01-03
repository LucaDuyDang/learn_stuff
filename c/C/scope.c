#include <stdio.h>

// int x = 50;

// int myScope()
// {
//     int x = 30;
//     return x + 2;
// }
int x = 5; // global scope

void functionIncre() // change value of X global value
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d", ++x);
    }
}

void myFunction()
{
    int x = 30; // local scope
    printf("scope %d \n", x);
}

int main()
{
    // in this case X will be local
    myFunction(); // treat naming variables

    // this will be global
    printf("%d", x);

    functionIncre();
    return 0;
}