#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the elements of array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements before reversing:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nAfter reversing All the element of Array:\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}