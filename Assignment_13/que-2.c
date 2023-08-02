#include<stdio.h>
 int oddSum(int n)
 {
    if(n==1)
      return 1;

    return (2*n-1)+oddSum(n-1);
 }
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
  printf("sum of first %d odd natural numbers is : %d",n,oddSum(n));
  return 0;
}