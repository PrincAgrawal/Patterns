#include<stdio.h>
int power(int x, int y)
{   if(y==0)
      return 1;

    return x*power(x,y-1);
}
int main()
{
  int x,y;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  printf("%d to the power %d is %d",x,y,power(x,y));
  return 0;
}