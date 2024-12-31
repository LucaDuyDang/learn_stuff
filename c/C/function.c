#include <stdio.h>

// void with parameter
void paramFuncOne(char name[]) // void one
{
    printf("\n Hello %s\n", name);
}

// void with parameter calculate
void paramCalculate(int x, int y) // void two
{
    int sum = x + y;
    printf("\n The sum of x + y = %d \n", sum);
}

// with multiple parameter
void paramFuncTwo(char name[], int age) // void three
{
    printf("\n Hello %s, you are %d years old\n", name, age);
}

// void is a function without return value and no parameter
void funcCall() // void four
{
    printf("Luca Create a Function\n");
}

void ptrPrintf() // void five
{
    printf("Luca Create a Pointer\n");
}

void calculateNumber() // void six
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("\nThe result of a + b = %d\n", c);
}

int main()
{
    /*
     * Calling function
     * A function can be call mutiple time
     * Function also can be calculate the Number
     */
    funcCall();
    ptrPrintf();

    // create a int for (i) loop
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

    // calling function with \n on front avoid for
    calculateNumber();

    // Calling function with parameter
    paramFuncOne("LucaDang");
    paramFuncTwo("LucaDang", 30);

    // example test
    paramFuncOne("Linh Chi");
    paramFuncOne("Lucie Nguyen");
    paramFuncOne("Pretty Girl");
    paramFuncTwo("Perfect Girl", 18);

    // test function with loop / 2d loop

    for (int a = 0; a <= 2; a++)
    {
        for (int b = 0; b <= 2; b++) // 2d loop
        {
            paramFuncOne("Luca Have Enter");
        }
        for (int c = 0; c <= 2; c++) // 2d loop
        {
            paramFuncTwo("Luca Has Enter", 24);
        }
    }

    // paramCalculate test / loop / 2d loop
    paramCalculate(10, 20);

    for (int e = 0; e < 2; e++)
    {
        paramCalculate(5, 5);
        for (int r = 0; r < 2; r++) // 2d loop
        {
            paramCalculate(7, 7);
        }
    }

    return 0;
}