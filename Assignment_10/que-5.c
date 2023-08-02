#include<stdio.h>
void oddNatural(int x)
{
    int i;
    for(i=1;i<=2*x;i++)
    {
        if(i%2==1)
          printf("%d ",i);
    }
}
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  oddNatural(n);
  return 0;
}