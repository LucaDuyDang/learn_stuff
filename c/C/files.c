#include <stdio.h>

int main()
{
    // syntax for create a files txt
    /*
    w - Writes to a file
    a - Appends new data to a file
    r - Reads from a file
    */
    FILE *file;
    file = fopen("test.txt", "w");

    fclose(file);
    return 0;
}