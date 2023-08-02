#include<stdio.h>
int main()
{
    int i,sum=0,n;

    printf("enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum+ i*i*i;
    }

    printf("Cubes of squares of first natural numbers is:%d",sum);
    return 0;
}