#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ham gotoxy thay the SetConsoleCursorPosition
void gotoxy(int x, int y) // xay dung ham gotoxy
{
    printf("\033[%d;%dH", y, x); // ANSI escape code to move the cursor
}

// Ham SetColor thay the SetConsoleTextAttribute
void SetColor(int color)
{
    printf("\033[0;%dm", 30 + color); // ANSI escape code for setting text color
}

int main()
{
    int a[256] = {0};
    a[7] = a[8] = a[9] = a[10] = a[13] = 1; // ASCII control characters

    // Display header
    char *s = "ASCII table using by Dev LucaDang";
    gotoxy(40 - strlen(s) / 2, 1);
    printf("%s\n\n", s);

    // Loop to print ASCII table
    for (int i = 0; i < 20; i++)
    {
        for (int j = i, k = 0; k < 13 && j < 256; k++, j += 20)
        {
            SetColor(2);       // Set color to green
            printf("%4d ", j); // Print ASCII value
            SetColor(7);       // Set color to white
            if (a[j])
                printf(" "); // Control characters
            else
                printf("%c", j); // Print ASCII character
        }
        printf("\n");
    }

    // Display footer
    SetColor(2); // Set color to green
    s = "Program compiled for macOS";
    gotoxy(40 - strlen(s) / 2, 24);
    printf("%s\n\n", s);

    SetColor(7); // Reset color to default
    return 0;
}
