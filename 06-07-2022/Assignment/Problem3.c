#include<stdio.h>
int main()
{
    int p1,p2;
    scanf("%d",&p1);


    scanf("%d",&p2);
    if(p1==p2)
    {
        printf("Right, Player-2 wins!\n");
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n");
        scanf("%d",&p2);

        if(p1==p2)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\n");
            scanf("%d",&p2);
            if(p1==p2)
            {
                printf("Right, Player-2 wins!\n");
            }
            else
            {
                printf("Wrong, 0 Chance(s) Left!\n");
                printf("Player-1 wins!\n");
            }

        }
    }

    return 0;
}


