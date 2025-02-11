#include <stdio.h>

void findSecondMin(int array[], int size, int *min, int *secondMin)
{
    *min = array[0];
    *secondMin = array[0]; // Incorrect initialization

    for (int i = 1; i < size; i++)
    {
        if (array[i] < *min)
        {
            *secondMin = *min; // Update secondMin before updating min
            *min = array[i];
        }
        else if (array[i] < *secondMin && array[i] != *min)
        {
            *secondMin = array[i]; // Update secondMin if it's between min and current value
        }
    }
}

void findSecondMax(int array[], int size, int *max, int *secondMax)
{
    *max = array[0];
    *secondMax = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < *max)
        {
            *secondMax = *max;
            *max = array[i];
        }
        else if (array[i] < *secondMax && array[i] != *max)
        {
            *secondMax = array[i];
        }
    }
}

int main()
{
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);
    int min, max, secondMin, secondMax;

    printf("Input\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    findSecondMin(array, size, &min, &secondMin);
    findSecondMax(array, size, &max, &secondMax);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Second Min: %d\n", secondMin); // Incorrect result
    printf("Second Max: %d\n", secondMax);
    return 0;
}
