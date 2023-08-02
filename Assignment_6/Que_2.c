#include<stdio.h>
int main()
{
   int i,sum=0,n;

   printf("Enter a number:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
     if(i%2==0)
       sum = sum +i;
   }              

   printf("Sum is: %d",sum);

   return 0;                                              
}