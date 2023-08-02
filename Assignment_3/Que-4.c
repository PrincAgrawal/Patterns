#include<stdio.h>
int main()
{
   int x;
   printf("enter a number:\n");
   scanf("%d",&x);
   (x&1)?printf("number is odd"):printf("number is even");
   return 0;
}