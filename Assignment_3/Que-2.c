#include<stdio.h>
int main()
{
   int x;
   printf("enter a number:\n");
   scanf("%d",&x);
   if(x%5==0)
   {
    printf("The given number is divisible by 5");
   }
   else{
    printf("not divisible by 5");
   }
   return 0;
}