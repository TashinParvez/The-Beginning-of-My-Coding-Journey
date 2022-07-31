#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c>180)
        printf("NO\n");
    else if(a==0 || b==0 || c==0)
        printf("NO\n");
    else if(a+b+c==180)
        printf("Yes\n");

    return 0;
}


