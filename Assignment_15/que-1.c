#include<stdio.h>
int greater(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
         max=a[i];
    }

    return max;
}
int main()
{
    int p;
    int a[6]={2,3,18,8,4,1};
    printf("Greatest no. in given Array is: %d",greater(a,6));
    return 0;
}