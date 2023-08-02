#include<stdio.h>
int greater(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
         min=a[i];
    }

    return min;
}
int main()
{
    int p;
    int a[6]={2,0,18,8,4,1};
    printf("smallest no. in given Array is: %d",greater(a,6));
    return 0;
}