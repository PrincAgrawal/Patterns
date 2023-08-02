#include<stdio.h>
int check(int num, int digit)
{
    while(num!=0)
    {
        if(num%10==digit)
          return 1;

        num= num/10;
    }
    return 0;
    
}
int main()
{
    int digit,num,f;
    printf("Enter a number :");
    scanf("%d",&num);
     printf("Enter a digit that you have to find :");
    scanf("%d",&digit);
    f=check(num,digit);
    
    if(f==1)
      printf("Digit found!");
    else
      printf("Digit not found!");

    return 0;

}

