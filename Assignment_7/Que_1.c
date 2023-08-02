#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        // printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n %dth term of fibonaaci series is:%d",n,c);
    return 0;
}