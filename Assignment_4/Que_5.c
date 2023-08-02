#include<stdio.h>
int main()
{
    int i;
    printf("First 10 odd natural numbers in reverse order are:\n");
    for(i=20;i>=1;i--)
    {
       if(i%2==1)
         printf("%d ",i);
    }

return 0;
}