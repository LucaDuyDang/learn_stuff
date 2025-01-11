// Basic Array Manipulation
#include <stdio.h>

// global integer
int i, biggestNumber, smallestNumber, sum, avarage;
int arrayNumber[3];
int length = sizeof(arrayNumber) / sizeof(arrayNumber[0]);
// function
void scanArray();
void findArrBiggest();
void findArrSmallest();
void numberSum();
void sumAverage();
// specify
int main()
{
    printf("Input 10 numbers\n");
    scanArray();
    findArrBiggest();
    printf("Biggest Number : %d \n", biggestNumber);
    // printf("Smallest Number : %d \n", smallestNumber);
    printf("Total Sum : %d \n", sum);
    // printf("Average : %d \n", sumAverage());
}

void scanArray()
{
    for (i = 1; i < length; i++) // i = 1 để bắt đầu từ 1 đến 10 elements
    {
        scanf(" %d ", &arrayNumber[i]);
    }
}

void findArrBiggest()
{
    biggestNumber = arrayNumber[0];
    for (i = 1; i < length; i++)
    {
        if (arrayNumber[i] > biggestNumber)
        {
            biggestNumber = arrayNumber[i];
        }
    }
}

// void findArrSmallest()
// {
//     smallestNumber = arrayNumber[1];
//     for (i = 1; i < length; i++)
//     {
//         if (arrayNumber[i] < smallestNumber)
//         {
//             smallestNumber = arrayNumber[i];
//         }
//     }
// }

void numberSum()
{
    for (i = 0; i < length; i++)
    {
        sum += arrayNumber[i];
    }
}