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
    // & is the memory address like pointer
    //!!!!!!!!!!!!!
    //&userNum is also often been call a "pointer".
    // A pointer basically stores the memory address of a variable as its value.
    // to print pointer value, we use the %p format specifier.
    //!!!!!!!!!!!!!

    // printf out
    printf("Your number is : %d \n", userNum);
    printf("Your char is : %c \n", userChar);
    //================================================================
    // string input
    char yourName[30];

    // ask
    printf("Enter your name here: \n");

    // get and save
    scanf("%s", yourName);

    // output
    printf("Hello Master %s \n", yourName);
    //================================================================
    // function that get multiple words
    char fullName[30];

    // ask
    printf("Type fullName here: \n");

    // get and saving
    fgets(fullName, sizeof(fullName), stdin); // fgets fill get the full of multiple word

    // print out
    printf("Hi this is full name %s", fullName);

    return 0;
}