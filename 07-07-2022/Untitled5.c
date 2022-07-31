#include<stdio.h>
int main(){

    // Player-1 picks a number X :
    int X;
    printf("\n--------Player 1--------\n");
    printf("\nPlease enter the number: ");
    scanf("%d",&X);

    //Player-2 has to guess that number:
    int guess;
    printf("\n--------Player 2--------\n");
    printf("\nPlease consider that you have 3 tries.\n");
    printf("\nEnter the number you guessed: ");
    scanf("%d",&guess);

    if(guess!=X) {
        printf("\nWrong, 2 Chance(s) Left!\n");
    }
    else if(guess=X){
        printf("\nRight, Player-2 Wins!\n");
    }

    printf("\nEnter the number you guessed: ");
    scanf("%d",&guess);

    if(guess!=X) {
        printf("\nWrong, 1 Chance(s) Left!\n");
    }
    else if(guess=X){
        printf("\nRight, Player-2 Wins!\n");
    }

    printf("\nEnter the number you guessed: ");
    scanf("%d",&guess);

    if(guess!=X) {
        printf("\nWrong, 0 Chance(s) Left!\n");
        printf("Player-1 wins!\n");
    }
    else if(guess=X){
        printf("\nRight, Player-2 Wins!\n");
    }

return 0;

}
