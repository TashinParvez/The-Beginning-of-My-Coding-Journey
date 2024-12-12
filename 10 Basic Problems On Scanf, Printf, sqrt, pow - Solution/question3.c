#include <stdio.h>

int main()
{
    int a, b;
    int sum, difference, product, quotient;

    // Taking input for a and b
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Performing calculations
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;


    // Printing the results
    printf("Difference: %d\n", sum);
    printf("Sum: %d\n", difference);
    printf("Quotient: %d\n", product);
    printf("Product: %d\n", quotient);

    return 0;
}
