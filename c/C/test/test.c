#include <stdio.h>

void function(int array[], int i, int size, int *sum, int *min, int *max, float *avarage)
{
    *sum = 0;
    *min = array[0];
    *max = array[0];
    *sum += array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] > *sum)
        {
            *sum = array[i];
        }
        if (array[i] < *min)
        {
            *min = array[i];
        }
    }
    *avarage = (float)*sum / size;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum, min, max;
    float avarage;
    int size = sizeof(array) / sizeof(array[0]);

    function(array, i, size, &sum, &min, &max, &avarage);
    printf("Min:  %d \n", min);
    printf("Max:  %d \n", max);
    printf("Sum:  %2.d \n", sum);
    printf("Avarage:  %2.f \n", avarage);
}