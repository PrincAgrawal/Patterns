#include<stdio.h>
int main()
{
   int n, count=0;

   printf("Enter a number:");
   scanf("%d",&n);
     
   while(n!=0)
   {
     n=n/10;
     count = count +1;
   }

   printf("Number of digit in the given number is:%d",count);

   return 0;
     
}