#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("enter a number :");
    scanf("%d",&x);

    y= x%10;  // x=123 and y=3
    x=x/10;   // x=12
    y=y+x%10; //x=12 and y=3+2=5
    x=x/10;   // x=1
    y= y+ x%10; // x=1 and y=5+1=6
    x =x/10;
    sum= y+x;

    printf("The sum of digits of a given number is : %d",sum);
    return 0;

}