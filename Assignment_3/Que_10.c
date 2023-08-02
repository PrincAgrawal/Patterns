#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cost price:");;
    scanf("%d",&cp);
    printf("Enter the selling price:");;
    scanf("%d",&sp);

    if(sp>cp)
    {
        printf("profit = %d",sp-cp);
    }
    else if(cp>sp)
    {
        printf("loss = %d",cp-sp);
    }
    else
    {
        printf("No profit No loss!");
    }

    return 0;
}