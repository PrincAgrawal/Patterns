#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         return 0;
    }
    return 1;
}
int main()
{
  int x;
  printf("enter a number:");
  scanf("%d",&x);
  if(prime(x)==1)
     printf("Number is prime!");
    else
      printf("Number is not prime!");

    return 0;
}