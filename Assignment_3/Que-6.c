#include<stdio.h>
int main()
{
   int x,y;
   printf("enter two numbers:\n");
   scanf("%d%d",&x,&y);
   if(x>y)
   {
    printf("%d is greater than %d",x,y);
   }
   else if(y>x)
   {
    printf("%d is greater than %d",y,x);
   }
   else
   {
     printf("both are same:so number is %d",x);
   }
   return 0;
}