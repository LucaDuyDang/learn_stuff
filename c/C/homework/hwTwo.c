#include <stdio.h>

int array[10];
int size, i, min, max, secondMin, secondMax;

void function(int array[], int i, int size, int *min, int *max, int *secondMin, int *secondMax)
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
        }
        if (array[i] < *min)
        {
            *min = array[i];
        }
    }
    *secondMax = *max - 1;
    *secondMin = *min - 1;
}
int main()
{

    size = sizeof(array) / sizeof(array[0]);
    printf("Input \n");

    for (i = 0; i < size; i++)
    {
        scanf("%d\n", &array[i]);
    }

    function(array, i, size, &min, &max, &secondMin, &secondMax);

    printf("Min %d\n ", min);
    printf("Max %d\n", max);
    printf("Second Min %d \n", secondMin);
    printf("Second Max %d \n", secondMax);
    return 0;
}

// Done