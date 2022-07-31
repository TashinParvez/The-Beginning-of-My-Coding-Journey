#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d",&b);

    int digit=0,lest;
    a=b;
    for(int i=0; i<i+1; i++)
    {
        lest= a%10;
        digit=digit+1;
        a=a/10;
        if(a<10)
        {
            digit=digit+1;
            break;
        }
    }

    //  printf("Digit %d\n",digit);


    int sum =0;
    int less=0;
    for(int i = digit-1; i>=0; i--)
    {
        less = b%10;
        sum =sum + less * pow(10,i);
        b=b/10;

        if(b<10)
        {
            less = b;
            sum =sum + b * pow(10,i-1);
            break;
        }

    }

    // printf("%d",sum);

    if(sum==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}
