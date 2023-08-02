#include<stdio.h>
void fib(int x)
{
    int a=-1,b=1,i,c;
    for(i=1;i<=x;i++)
    {
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c; 
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);

    return 0;
}