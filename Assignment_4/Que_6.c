#include<stdio.h>
int main()
{
    int i;
    printf("First 10 Even natural numbers are:\n");
    for(i=1;i<=20;i++)
    {
       if(i%2==0)
         printf("%d ",i);
    }

return 0;
}