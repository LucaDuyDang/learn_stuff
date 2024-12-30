#include <stdio.h>

// void is a function without return value and no parameter
void funcCall()
{
    printf("Luca Create a Function\n");
}

void ptrPrintf()
{
    printf("Luca Create a Pointer\n");
}

int main()
{
    // calling function
    funcCall();
    ptrPrintf();

    // create a int for I loop
    int i;

    // create Array of int
    int myNumbers[20] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // create Array char
    char nameTag[20] = "Dev LucaDang";

    // create Lenght of Array
    int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int lenghtC = sizeof(nameTag) / sizeof(nameTag[0]);

    // loop create printf int
    for (size_t i = 0; i < lenght; i++)
    {
        // printf all the number in the array
        printf("%d\n", myNumbers[i]);
    }

    // loop create printf char with j inside for

    for (int j = 0; j < lenghtC; j++)
    {
        // printf all the char in the array
        printf("%c", nameTag[j]);
    }

    return 0;
}