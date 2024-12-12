#include <stdio.h>
#include <math.h>  // To include the sqrt() function

int main() {
    float x1, y1, x2, y2, distance;

    // Taking input for the coordinates of the two points
    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculating the distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Printing the distance with 2 decimal places
    printf("Distance: %.2f\n", distance);

    return 0;
}
