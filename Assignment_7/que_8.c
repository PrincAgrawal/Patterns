#include<stdio.h>
int main()
{
  int n,f=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for (int i = 2; i < n; i++)
  {
    if(n%i==0)
       f=1;
  }

  if(f==0)
    printf("Prime no.");
  else
    printf("Not a prime no.");

  return 0;

     
}