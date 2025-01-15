#include <stdio.h>

void function(int array[], int i, int size, int *min, int *max, int *sum, float *average)
{
    *sum = 0;
    *min = array[0];
    *max = array[0];

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

    // loop sum thought array on each element
    for (i = 0; i < size; i++)
    {
        *sum = *sum + array[i]; // shortcut : *sum += array[i]
    }
    *average = (float)*sum / size;
}

int main()
{
    int array[10];
    int i, sum, min, max;
    float average;
    int size = sizeof(array) / sizeof(array[0]);
    printf("Input\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    function(array, i, size, &min, &max, &sum, &average);

    printf("Min %d\n", min);
    printf("Max %d \n", max);
    printf("Sum %d\n", sum);
    printf("Avarage %2.f\n", average);
}