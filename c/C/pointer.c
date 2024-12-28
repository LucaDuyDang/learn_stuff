#include <stdio.h>

int main()
{
    int myAge = 43; // int var
    int *ptr = &myAge;
    printf("%d", myAge);  // output 43
    printf("%p", &myAge); // output the memory address of myAge(0x7ffe5367e044)
    printf("%p", ptr);
    return 0;
}