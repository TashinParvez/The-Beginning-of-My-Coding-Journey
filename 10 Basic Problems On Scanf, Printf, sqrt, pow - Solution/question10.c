#include <stdio.h>

int main()
{
    int total_seconds, days, hours, minutes, seconds;

    // Taking the time interval in seconds as input
    printf("Enter the time interval in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate days, hours, minutes, and seconds
    days = total_seconds / (24 * 3600); // Number of days
    total_seconds %= (24 * 3600);       // Remaining seconds after calculating days

    hours = total_seconds / 3600; // Number of hours
    total_seconds %= 3600;        // Remaining seconds after calculating hours

    minutes = total_seconds / 60; // Number of minutes
    seconds = total_seconds % 60; // Remaining seconds after calculating minutes

    // Print the result
    printf("%d day(s), %d hour(s), %d minute(s), %d second(s)\n", days, hours, minutes, seconds);

    return 0;
}
