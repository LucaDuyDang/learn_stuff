#include <stdio.h>

int val = 1;

struct Number
{
    char e[20];
    char r[200];
    float Sum;
};

void ptrCal(int x, int y);

void lorem();

void ptrCalling(float x, float y);

int main()
{
    float i;
    float j;

    printf("type num float\n");
    float result;
    scanf("%f", &result);

    printf("type num int\n");
    int intArr[5];
    scanf("%d", &intArr[0]);

    float NumberSum = result + intArr[0];

    if (NumberSum <= 10)
    {
        ptrCal(2, 2);
        printf("NumberSum is %2.f\n", NumberSum);
    }
    else
    {
        lorem();
    }

    printf("type i \n");
    scanf("%f", &i);

    printf("type j \n");
    scanf("%f", &j);

    ptrCalling(i, j);
    return 0;
}

void lorem()
{
    printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nib \n ");
}

void ptrCal(int x, int y)
{
    float val;
    float sum;
    sum = x + y;

    if (sum < 5)
    {
        printf("Start Function Value \n");
        for (int i = 0; i <= 10; i++)
        {
            printf("Value of val is %2.f\n", val);
            val++;
        }
        printf("End Function Value \n");
    }
    else
    {
        printf("End Line \n");
    }
}

void ptrCalling(float x, float y)
{
    float sum;
    sum = x + y;
    printf("The sum of i + j = %2.f \n", sum);
}