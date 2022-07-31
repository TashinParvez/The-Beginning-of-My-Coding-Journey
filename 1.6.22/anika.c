#include<stdio.h>
int main()
{
    int m,p,c;
    scanf("%d %d %d",&m,&p,&c);

    if((m+p+c)<=300)
    {
        if(((m>=75)&&(p>=60)&&(c>=50)&&(m+p+c)>=250)||(p+c)>=150)
        {
            printf("Allow to sit in the exam\n");
        }
        else
        {
            printf("Not Allow\n");
        }
    } else
        {
            printf("Wrong information\n");
        }

    return 0;
}
