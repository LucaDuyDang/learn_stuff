#include <stdio.h>

int main()
{
    int myAge = 43;       // int var
    int *ptr = &myAge;    // take value of int myAge
    printf("%p", &myAge); // output the memory address of myAge(0x7ffe5367e044)
    printf("%p", ptr);    // output the same above (0x7ffe5367e044)
    printf("%d", myAge);  // output 43
    printf("%d", *ptr);   // output also 43, value pointer

    // access the lopp with pointer array
    //  create a int
    int myNumbers[4] = {5, 6, 10, 20};
    // pointer to the int myNumbers

    int *ptr = myNumbers;

    // use loop to acces the entire array
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", *(ptr + i));
    }

    // and it can be change value by pointer
    *ptr = 17;
    *(ptr + 1) = 18;
    return 0;
}