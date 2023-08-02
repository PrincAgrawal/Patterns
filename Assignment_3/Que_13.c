#include<stdio.h>
int main()
{
   int num;

   printf("Enter a number:\n");
   scanf("%d",&num);

   if(num%2==0 && num%3==0)
   {
    printf("The given number is divisible by 2 and 3");
   }
   else
   {
    printf("The given number is not divisible by 2 and 3");

   }
   return 0;
}