#include <stdio.h>

int main() {
    int amount, remaining;
    int notes_500, notes_100, notes_50, notes_10, notes_5, notes_1;

    // Input the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate number of 500 notes
    notes_500 = amount / 500;
    remaining = amount % 500;

    // Calculate number of 100 notes
    notes_100 = remaining / 100;
    remaining %= 100;

    // Calculate number of 50 notes
    notes_50 = remaining / 50;
    remaining %= 50;

    // Calculate number of 10 notes
    notes_10 = remaining / 10;
    remaining %= 10;

    // Calculate number of 5 notes
    notes_5 = remaining / 5;
    remaining %= 5;

    // Remaining amount is in 1-unit notes
    notes_1 = remaining;


    // Print the result
    printf("%d note(s) of 500\n", notes_500);
    printf("%d note(s) of 100\n", notes_100);
    printf("%d note(s) of 50\n", notes_50);
    printf("%d note(s) of 10\n", notes_10);
    printf("%d note(s) of 5\n", notes_5);
    printf("%d note(s) of 1\n", notes_1);
    

    return 0;
}
