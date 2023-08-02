#include<stdio.h>
 int evenSum(int n)
 {
    if(n==1)
      return 2;

    return (2*n)+evenSum(n-1);
 }
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
  printf("sum of first %d even natural numbers is : %d",n,evenSum(n));
  return 0;
}