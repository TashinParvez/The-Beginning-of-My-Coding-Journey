#include <stdio.h>

int main()
{
    double x, y; // Variables to hold inputs
    printf("Enter two numbers (X Y): ");
    scanf("%lf %lf", &x, &y);

    // Perform addition, subtraction, and multiplication
    double addition = x + y;
    double subtraction = x - y;
    double multiplication = x * y;
    double quotient = x / y;
    int xx=x, yy = y;
    int remainder = xx % yy;

    // Output the results
    printf("Addition: %.2lf\n", addition);
    printf("Subtraction: %.2lf\n", subtraction);
    printf("Multiplication: %.2lf\n", multiplication);
    printf("Quotient: %.2lf\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
