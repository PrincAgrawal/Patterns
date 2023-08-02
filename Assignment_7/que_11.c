#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        if(n&1==1)
           break;
        
        n=n>>1;
    }

    printf("position of first 1 in LSB is %d",count);
    return 0;
}