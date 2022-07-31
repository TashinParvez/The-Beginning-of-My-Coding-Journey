#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);

    for(int i=1; i<i+1; i++)
    {
        j=n%10;
        printf("%d",j);
        n=n/10;
        if(n<10)
        {
            printf("%d",n);
            break;
        }
    }

    return 0;
}

