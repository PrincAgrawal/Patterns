#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
      printf("given number is positive!");
    }
    if(x<=0)
    {
      printf("given number is non positive!");
    }
    return 0;

}