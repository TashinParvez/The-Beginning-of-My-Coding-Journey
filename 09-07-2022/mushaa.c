#include<stdio.h>
int main()
{

    int i=0,n;
    float numbers,average,sum=0;

    printf("\nHow many numbers you want: ");
    scanf("%d",&n);
    printf("\nEnter %d numbers one by one: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%f", &numbers);
        sum+=numbers;
    }
    //calculation and result :

    average=sum/n;
    printf("\nAVG of %d inputs: %f",n,average);

    return 0;


}
