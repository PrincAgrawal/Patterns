#include<stdio.h>
void natural(int n)
{
    if(n==0)
      return;
    else
      printf("%d ",n);
       natural(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%dd",&n);
    natural(n);

    return 0;
}