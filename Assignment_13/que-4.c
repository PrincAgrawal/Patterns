#include<stdio.h>
 int squareSum(int n)
 {
    if(n==1)
      return 1;

    return (n*n)+squareSum(n-1);
 }
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("sum of square of first %d natural numbers is : %d",n,squareSum(n));
  return 0;
}