#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(i%2==1)
         printf("%d ",i);
    }

return 0;
}