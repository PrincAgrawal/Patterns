#include<stdio.h>
int main()
{
    int a=1,b=1,c,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d  %d ",a,b);
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;  
    }

    return 0;
}