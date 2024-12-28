#include <stdio.h>

int main()
{

    // ----------- While struct ----------------
    // int i = 0;
    // while (i < 5)
    // {
    //     printf("number: %d\n", i);
    //     i++;
    // }

    // +++++++++++ Do/While +++++++++++++++++++

    // int i = 0;
    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i < 5);

    // ---------- For struct -----------------
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("number: %d\n", i);
    // }

    // ++++++++++ For nest +++++++++++++++
    int i, j;

    // outer loop
    for (i = 1; i <= 2; ++i)
    {
        printf("outer line: %d\n", i); // two times

        // inner loop
        for (j = 1; j <= 3; ++j)
        {
            printf("inner: %d\n", j); // two times plus three ( six time)
        }
    }
    //======================================================
    return 0;
}
