#include<stdio.h>
int main()
{
    int i;
    printf("First 10 Even natural numbers in Reverse order are:\n");
    for(i=20;i>=1;i--)
    {
       if(i%2==0)
         printf("%d ",i);
    }

return 0;
}