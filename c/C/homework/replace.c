#include <stdio.h>
#include <string.h>

int main()
{
    char text[100] = "HoangDuy!!";
    // scanf("%s", &text);

    // strlen = string length
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == "!!")
        {
            text[i] = "hh";
        }
    }
    printf("%s", text);
    return 0;
}