#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Taking input in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converting Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Printing the result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}