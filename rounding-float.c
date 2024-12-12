#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    int extra = (int)(a * 2) % (int)a;

    printf("%d", (int)a + extra);

    return 0;
}
