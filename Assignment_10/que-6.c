#include<stdio.h>
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact = fact *i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of given number is: %d",fact(n));
    return 0;
}