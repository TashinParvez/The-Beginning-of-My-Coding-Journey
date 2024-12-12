#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    // Taking input for Principal, Rate of interest, and Time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Printing the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
