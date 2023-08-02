#include<stdio.h>
int c=0;
int count(int n)
{
   if(n==0)
     return 0;

    else
      c++;
      count(n/10);
      return c;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number of digits are: %d",count(n));
    return 0;
}