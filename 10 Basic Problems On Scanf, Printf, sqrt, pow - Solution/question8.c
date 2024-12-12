#include <stdio.h>

int main() {
    int a, b;

    // Taking input for the two integers
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    // Displaying the values before swapping
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping the values without using a third variable
    a = a + b; // Step 1: a now becomes the sum of a and b
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b


    // Displaying the values after swapping
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
