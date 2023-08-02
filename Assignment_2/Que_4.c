#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before swapping the value of x= %d and y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After swapping the value of x=%d and y= %d",x,y);
    return 0;
}