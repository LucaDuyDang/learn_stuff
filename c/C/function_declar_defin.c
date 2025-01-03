#include <stdio.h>

// ================================== function declaration
// function declaration is the function name, return type, and parameters
void functionDe();

// example about Func Parameters

int calculate(int a, int b);

// function calling function

void myFunction();
void myOtherFunction();

int main() // ================================== main function
{
    functionDe(); // example about function

    int result = calculate(10, 20);          // call the function
    printf("The result is : %d \n", result); // printf the result function return

    myFunction();

    return 0;
}

// ================================== function definition

void functionDe()
{
    printf("function execute \n");
}

int calculate(int a, int b)
{
    return a + b;
}

void myFunction()
{
    printf("Myfunction Text \n");
    myOtherFunction();
}

void myOtherFunction()
{
    printf("MySecondFunction Text \n");
}