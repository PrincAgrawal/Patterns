#include<stdio.h>
 int digitSum(int n)
 {
    if(n==1)
      return 1;

    return  (n%10) + digitSum(n/10);
 }
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("sum of digit of  %d is : %d",n,digitSum(n));
  return 0;
}