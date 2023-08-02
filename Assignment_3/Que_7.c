#include<stdio.h>
int main()
{
   int a,b,c,discreminent;
   printf("enter the value of a,b,c:\n");
   scanf("%d%d%d",&a,&b,&c);
   discreminent= b*b-4*a*c;

   printf("The value of discreminent is :%d\n",discreminent);

   if(discreminent>0)
   {
    printf("roots are real and distinct!");
   }
   else if(discreminent=0)
   {
    printf("root are real and equal!");
   }
   else
   {
     printf("roots are imaginary!");
   }
   return 0;
}