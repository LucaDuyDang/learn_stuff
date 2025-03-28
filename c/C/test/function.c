#include <stdio.h>

/*
 * Function consist of two parts
 * 1. Function Declaration
 * 2. Function Definition
 */

// void with parameter
void paramFuncOne(char name[]) // void one
{
    printf("\n Hello %s\n", name);
}

void paramFuncTwo(char name[], int age)
{
}

// void with parameter calculate
void paramCalculate(int x, int y) // void two
{
    int sum = x + y;
    printf("\n The sum of x + y = %d \n", sum);
}

// with multiple parameter
void paramFunc(char name[], int age) // void three
{
    printf("\n Hello %s, you are %d years old\n", name, age);
}

// void is a function without return value and no parameter
void funcCall() // void four
{
    printf("Create a Function\n");
}

void ptrPrintf() // void five
{
    printf("Create a Pointer\n");
}

void calculateNumber() // void six
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("\n The result of a + b = %d\n", c);
}

void callNumbers(int myNum[15]) // void seven
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n %d \n", myNum[i]);
    }
}

// we use int or float for return a value
int returnValue(int n, int m)
{
    return n + m;
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

    // create int Array
    int myNumbers[20] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // create char Array
    char nameTag[20] = "Dev LucDang";

    // create array length
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int lengthC = sizeof(nameTag) / sizeof(nameTag[0]);

    // loop create printf int
    for (size_t i = 0; i < length; i++)
    {
        // printf all the number in the array
        printf("%d\n", myNumbers[i]);
    }

    // loop create printf char with j inside for
    for (int j = 0; j < lengthC; j++)
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

    // Pass function array parameters
    int myNum[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    callNumbers(myNum); // function call array int parameter

    // return value function

    printf("\n Return is : %d \n", returnValue(30, 66));

    // return value in array result
    int resultArr[5];

    // call the array function with a different value
    resultArr[0] = returnValue(30, 20);
    resultArr[1] = returnValue(30, 12);
    resultArr[2] = returnValue(30, 11);
    resultArr[3] = returnValue(20, 11);
    resultArr[4] = returnValue(12, 11);

    for (int b = 0; b < 5; b++)
    {
        printf(" \n ResultArray%d is : %d \n", b + 1, resultArr[b]);
    }

    return 0;
}