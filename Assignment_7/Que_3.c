#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    printf("%d th term of fibonaaci series is %d",num,b);
     
    return 0;
}