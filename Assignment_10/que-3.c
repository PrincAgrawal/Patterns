#include<stdio.h>
int Evenodd(int n)
{
    if(n%2==0)
      return 1;
    else
      return 0;
}
int main()
{
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   printf("%d",Evenodd(n));  
   return 0;
}