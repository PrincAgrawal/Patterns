#include<stdio.h>
int main()
{
    int n,i,j,x;
    // printf("Enter a number:");
    // scanf("%d",&n);
     for(x=2;x<=100;x++)
    {
       for(j=2;j<x;j++)
       {
          if(x%j==0)
            break;
        }
        if(j==x)
        printf("%d\n",x);
    }

    return 0;
}