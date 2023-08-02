#include<stdio.h>
int main()
{
    int num,append;
    int digit;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter a digit:");
    scanf("%d",&digit);
    num = num*10;
    append= num+digit;
    printf("After Append a number and a digit the result is:%d",append);
    return 0;

}