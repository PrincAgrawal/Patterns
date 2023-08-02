#include<stdio.h>
int  power(int x,int y)
{
    int i,n=x;
    for(i=1;i<y;i++)
    {
        x=x*n;
    }
    return x;
}
int main()
{
    int n,m;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&m);
    printf("%d to the power %d = %d",n,m,power(n,m));

    return 0;
}