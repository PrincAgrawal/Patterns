#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=6*n+1;j++)
        {
            if(j>=n+1-i&&j<=2*n+i || j>=4*n+2-i&&j<=5*n+1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=3*n+1;i++)
    {
        for(j=1;j<=6*n+1;j++)
        {
            if(j>=i && j<=6*n+2-i)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }

    return 0;
}
