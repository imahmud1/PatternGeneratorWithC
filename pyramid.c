#include<stdio.h>
int main()
{
    int i, j, n, k, l, count = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        printf("* ");
        count++;
        for(l=1; l<=2*i-3; l++)
            printf("  ");
        if(i==1)
        {
            printf("\n");
        }
        else
        {
            printf("* ");
            count++;
            printf("\n");
        }
    }
    printf("* ");
    for(i =1; i<count; i++)
    {
        printf("* ");
    }
    return 0;
}
