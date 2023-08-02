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
int permutation(int n, int r)
{
    return fact(n)/fact(r);
}
int main()
{
    int n,r;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("selected number of items at a time:");
    scanf("%d",&r);
    printf("Combinations are : %d",permutation(n,r));
    return 0;
}