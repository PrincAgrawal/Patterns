#include<stdio.h>
int main()
{
    int hour,min;

    printf("Enter the time:");
    scanf("%d:%d",&hour,&min);

    printf("%d hour and %d Minute",hour,min);
    return 0;
}