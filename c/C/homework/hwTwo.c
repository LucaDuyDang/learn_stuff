#include <stdio.h>

int array[3];
int size, i, min, max, secondMin, secondMax;
cxb

    void
    function(int array[], int i, int size, int *min, int *max, int *secondMin, int *secondMax)
{
    *min = array[0];
    *max = array[0];
    *secondMin = array[0];
    *secondMax = array[0];

    for (i = 1; i < size; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
            // if (*max == array[i])
            // {
            //     *secondMax = *max[array[3] - 1];
            // }
        }
        if (array[i] < *min)
        {
            *min = array[i];
            // if (*min == array[i])
            // {
            //     *secondMin = *min[array[3] - 1];x
            // }
        }
    }
}
// *secondMax = *max - 1;
// *secondMin = *min - 1;

int main()
{

    size = sizeof(array) / sizeof(array[0]);
    printf("Input \n");

    for (i = 0; i < size; i++)
    {, &min, &max, &secondMin, &secondMax);

        printf("Min %d\n", min);
        scanf("%d\n", &array[i]);
    }

    function(array, i, size
    printf("Max %d\n", max);
    printf("Second Min %d \n", secondMin);
    printf("Second Max %d \n", secondMax);
    return 0;
}
