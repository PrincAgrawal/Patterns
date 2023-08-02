#include<stdio.h>
int main()
{
    int i,x,y;

    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);

    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    } 

    printf("LCM of %d and %d is %d",x,y,i);

    return 0; 
}
