#include<stdio.h>
void square(int n)
{
    if(n<1)
      return;
    else
       square(n-1);   
        printf("%d ",n*n); 
}
      
      
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    square(n);

    return 0;
}