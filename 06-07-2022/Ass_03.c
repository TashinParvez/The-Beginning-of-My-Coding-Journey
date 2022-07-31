#include<stdio.h>
const int n=3;
int main()
{
    int p1,p2;
    scanf("%d",&p1);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&p2);

        if(p2==p1)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }
        else if(i==n)
        {
            printf("Player-1 wins!\n");
        }
        else
        {
            printf("Wrong, %d Chance(s) Left!\n",n-i);
        }
    }

    return 0;
}

// Guessing Game
