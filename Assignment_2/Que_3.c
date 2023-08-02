#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before swapping the value of x= %d and y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping the value of x= %d and y= %d",x,y);
    return 0;
}