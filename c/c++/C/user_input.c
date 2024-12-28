#include <stdio.h>

int main()
{
    // user input (scanf)
    // Create an integer variable that will store the number we get from the user
    int userInput;

    // ask the user to type in
    printf("Input number integer: \n");

    // get and save the number the user type
    scanf("%d", &userInput);

    // out put the number the user type
    printf("Your integer is : %d \n", userInput);
    //================================================================
    // multiple input
    // create an int

    int userNum;
    char userChar;

    // ask the user
    printf("Type in : ");

    // get and save
    scanf("%d %c", &userNum, &userChar);

    // printf out
    printf("Your number is : %d \n", userNum);
    printf("Your char is : %c \n", userChar);

    return 0;
}