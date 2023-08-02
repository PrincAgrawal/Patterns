#include<stdio.h>
int main()
{
   int x;
   printf("enter a number:");
   scanf("%d",&x);
   x= x%10;
   printf("unit digit of a given number is :%d",x);
   return 0;

}