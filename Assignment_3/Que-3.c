#include<stdio.h>
int main()
{
   int x;
   printf("enter a number:\n");
   scanf("%d",&x);
   if(x%2==0)
   {
    printf("Number is even!");

   }
   else{
    printf("Number is odd!");
   }
  return 0;
}