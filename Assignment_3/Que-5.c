#include<stdio.h>
int main()
{
   int x,count=0;
   printf("enter a number:\n");
   scanf("%d",&x);
   if(x>=100 && x<=999)
   {
    printf("given number is a three digit number:");
   }
   else
   {
     printf("not a three digit number!");
   }
   return 0;
}