#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int series(int n)
{
   int sum=0;
   for(int i=1;i<=n;i++)
   {
     sum= sum + fact(i)/i;
   }
   return sum;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of the series is : %d",series(n));

    return 0;
}