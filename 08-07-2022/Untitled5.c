#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        sum=sum*10+m;
        n=n/10;
    }
    n=sum;

while(n!=0)
{
    m=n%10;
     switch(m)
    {
    case 1:
        printf("one ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    case 10:
        printf("Ten ");
        break;

}
 n=n/10;

}
}
