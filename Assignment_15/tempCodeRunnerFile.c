#include<stdio.h>
void printReverse(int a[], int size)
{
    int i;
    printf("Reverse of given array is:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    printf("Given array is:\n");
    for(