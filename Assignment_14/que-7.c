#include<stdio.h>
int main()
{
    int a[5]={23,54,87,25,91};
    int i,max1=-1,max2=-2;

    for(i=0;i<5;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1= a[i];
        }
        else if(max2<a[i])
           max2= a[i];
    }
    printf("Second max no. is: %d",max2);
    return 0;
}