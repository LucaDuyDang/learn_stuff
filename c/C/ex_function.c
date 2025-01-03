#include <stdio.h>

/*
 *Real life example about array
 */

// function to convert Fahrenheit to Celcius
float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32); // two different type code float
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    // Set a fahrenheit value
    float f_value = 98.8;

    // Call the function with the fahrenheit value
    float result = toCelsius(f_value);

    // Print the fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);

    // Print the result
    printf("Convert Fahrenheit to Celsius: %.2f\n", result);

    return 0;
}