#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d",&x);

    if(x>0)
      printf("positive!");

    else if(x<0)
        printf("Negative!");

    else
       printf("Zero!");
   return 0;
}