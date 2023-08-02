#include<stdio.h>
int LCM(int x, int y)
{
    for(int i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
           return i;
    }
}
int main()\
{
   int a,b;
   printf("Enter two numbers:\n");
   scanf("%d%d",&a,&b);
   printf("LCM of %d and %d is %d",a,b,LCM(a,b));
   return 0;
}