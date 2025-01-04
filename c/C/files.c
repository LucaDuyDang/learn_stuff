#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt", "w");

    fclose(file);
    return 0;
}