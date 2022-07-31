#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    float num,avg=0.0;

    for(int i=1; i<=n; i++)
    {
        scanf("%f",&num);
        avg=avg+num;
    }

    avg=avg/n;
    printf("AVG of %d inputs: %f\n",n,avg);

    return 0;
}

