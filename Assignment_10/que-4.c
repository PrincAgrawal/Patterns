#include<stdio.h>
void printNatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printNatural(n);
    return 0;
}