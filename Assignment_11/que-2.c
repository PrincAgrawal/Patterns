#include<stdio.h>
int hcf(int a, int b)
{
    for ( int i = a*b; i>=1 ; i--)
    {
        if(a%i==0 && b%i==0)
           return i;
    }
}
int main()
{
    int i,a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    
    printf("HCF is : %d",hcf(a,b));
    return 0;
    
}