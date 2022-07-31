#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n;
    printf("Enter num: ");
    scanf("%d", &a);

    int i=a;
    int pp;
    int digit=0;
    while(i>0)
    {
        pp=i%10;
        digit=digit+1;
        i=i/10;
    }

    // printf("%d",digit);

    int sum=0;

    for(int k=digit-1; k>=0; k--)
    {
        b=a%10;
        sum=sum+ b* pow(10,k);
        a=a/10;

        if(a<10)
        {
            sum=sum + a*pow(10,k-1);
            break;
        }
    }

    printf("\nreverse num = %d\n",sum);

    return  0;
}
