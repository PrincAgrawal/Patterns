#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    x= x/10;
    printf("The number withouts its last digit is:%d",x);
    return 0;
}