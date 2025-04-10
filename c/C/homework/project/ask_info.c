#include <stdio.h>

struct userInput
{
    char name[20];
    int age;
    float favNum;
};

int main()
{
    struct userInput input; // calling struct
    // wellcoming to the program
    printf("Hello There\n");

    printf("Input Your Name\n");
    scanf("%s", &input.name);
    printf("Input Your Age \n");
    scanf("%d", &input.age);
    printf("Input Your Fav Num\n");
    scanf("%f", &input.favNum);

    printf("Your name is %s, you are %d year old. \n Your Fav Number is %.2f \n", input.name, input.age, input.favNum);
}