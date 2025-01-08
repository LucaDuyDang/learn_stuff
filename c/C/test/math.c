#include <stdio.h>
#include <math.h>

void mathCall(float i, float j);
void loopMath(double i, double j);

int main()
{
    float e, r, x, y;

    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);

    float sum = pow(x, y); // x^y

    printf("The value of x raised to the power of y is: %2.f \n ", sum);
    printf("+++++++++++++LINE+++++++++++++\n");

    double pow = x * y;

    printf("The value pow x is : %2.f \n ", pow);

    printf("Enter value for function : ");
    scanf("%f %f", &e, &r);
    mathCall(e, r);

    loopMath(sum, pow);

    return 0;
}

void mathCall(float i, float j)
{
    float sum = pow(i, j);
    printf("The pow of mathCall is: %2.f \n", sum);
}

void loopMath(double i, double j)
{
    double sum = pow(i, j);
    for (int o = 0; o < 3; o++)
    {
        printf("The pow of i and j is: %2.f \n", sum);
    }
}
