#include <stdio.h>

int main()
// real-life example w3schools.
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    // float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    // for (i = 0; i < length; i++)
    // {
    //     sum += ages[i];
    // }

    // avg = sum / length;

    // printf("The average age is : %.2f", avg); // find the avg ages number
    int lowerAge = ages[0];

    for (i = 0; i < length; i++)
    {
        if (lowerAge > ages[i])
        {
            lowerAge = ages[i];
        }
    };
    printf("The lowest age in the array is: %d", lowerAge); // find the lowest age in the array

    return 0;
}