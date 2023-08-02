#include<stdio.h>
void rightRotation(int a[],int size, int d)
{
    int x;
    for(int i=1;i<=d;i++)
    {
        x= a[size-1];
        for(int j=size-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
         a[0] = x;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]); 
    }
}

int main()
{
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    rightRotation(a,12,3);
    return 0;
}