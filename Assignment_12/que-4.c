#include<stdio.h>
void natural(int n)
{
    if(n<1)
      return;
    else
    printf("%d ",2*n-1);
    natural(n-1);
}
      
      
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    natural(n);

    return 0;
}