#include<stdio.h>
int hcf(int x, int y)
{
    if(y==0)
      return x;
    else
      return hcf(y,x%y);
}
int main()
{
    printf("Hcf is %d",hcf(10,15));
    return 0;
}