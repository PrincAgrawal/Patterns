#include<stdio.h>
int main()
{
   int i,sum=0,n;

   printf("Enter a number:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
      sum = sum +i;
   }               

   printf("Sum of first %d natural numbers is: %d",n,sum);

   return 0;                                              
}