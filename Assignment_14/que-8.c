#include<stdio.h>
int main()
{
    int a[10]={332,67,44,85,90,26,82,99,30,98};
    int i,max1=31,max2=13;
    for(i=0;i<10;i++)
    {
       if(max1>a[i])
         {
            max2=max1;
            max1=a[i];
         } 
         else if(max2>a[i] && max1<a[i])
           max2=a[i];
    }
    printf("second smallest element in array is:%d",max2);
    return 0;
}