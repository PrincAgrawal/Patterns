#include<stdio.h>
int main()
{
    int x;  //1234
    printf("Enter the number:");
    scanf("%d",&x);
    x= x/10;   // x=123
    x =x*10;   // x=1230
    printf("After this process the value of x is %d",x);
    return 0;
}