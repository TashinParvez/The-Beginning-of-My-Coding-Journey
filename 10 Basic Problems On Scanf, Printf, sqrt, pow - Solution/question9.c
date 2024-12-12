#include <stdio.h>

int main()
{
    float num;

    // Taking the floating-point number as input
    printf("Enter a floating-point number: \n");
    scanf("%f", &num);



    // Printing the integer part of the number
    printf("%.0f\n", num);

    // Printing the number with 1 digit after the decimal point
    printf("%.1f\n", num);

    // Printing the number with 2 digits after the decimal point
    printf("%.2f\n", num);

    // Printing the number with 3 digits after the decimal point
    printf("%.3f\n", num);

    // Printing the number with 4 digits after the decimal point
    printf("%.4f\n", num);

    // Printing the number in a custom format like 123_123_123 (assuming it's an integer)
    int intPart = (int)num; // Extracting the integer part
    printf("%d_%d_%d\n", intPart, intPart, intPart);

    // Printing the number in a custom format like 123_123.09821_123
    printf("%d_%.5f_%d\n", intPart, num, intPart);



    return 0;
}
