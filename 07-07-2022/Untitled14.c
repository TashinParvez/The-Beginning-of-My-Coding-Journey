#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int digit,p;


    for(int i=0; i<i+1; i++)  // to know digit
    {
        p = n%10;
        digit=digit+1;
        n=n/10;
        if(n<10)
        {
            digit=digit+1;
            break;
        }
    }


    return 0;
}

