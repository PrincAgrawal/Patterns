#include<stdio.h>
int main()
{
    int a[10],i,b[10];
    printf("Enter the elements of array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements that are stored in Array a:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("\n after copying elements of array a into Array b:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}