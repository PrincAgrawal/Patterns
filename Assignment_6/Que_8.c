#include<stdio.h>
int main()
{
   int n,f=0,i;

   printf("Enter a number:");
   scanf("%d",&n);

   for(i=2;i<n;i++)
   {
     if(n%i==0)
       f=1;
   }
   if(f==0)
   {
    printf("Prime number!");
   }
   else
   {
    printf("Not a prime number!");
   }

   return 0;
}