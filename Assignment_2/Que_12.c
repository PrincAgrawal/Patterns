#include<stdio.h>
int main()
{
    int x;
    printf("enter a three digit number:");
    scanf("%d",&x);
    x= (x%10)*100+(x/10);
    printf("After Appending the number is :%d",x);
    return 0;
}