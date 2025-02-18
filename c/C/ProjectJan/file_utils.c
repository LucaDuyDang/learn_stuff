#include "file_utils.h"
#include <stdio.h>
#include <stdlib.h>

char *read_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
        return NULL;

    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *content = malloc(length + 1);
    fread(content, 1, length, file);
    fclose(file);
    content[length] = '\0';

    return content;
}
