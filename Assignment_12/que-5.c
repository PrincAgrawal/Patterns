#include<stdio.h>
void natural(int n)
{
    if(n<1)
      return;
    else
    natural(n-1);
    printf("%d ",2*n);
    
}
      
      
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    natural(n);

    return 0;
}