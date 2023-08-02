#include<stdio.h>
int main()
{
    int a,b,i,j,x;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
     for(x=a;x<=b;x++)
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