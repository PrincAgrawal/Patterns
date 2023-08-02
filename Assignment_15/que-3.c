#include<stdio.h>
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
}
int main()
{
   int a[]={3,6,2,81,34,0,17,31};
   sort(a,8);
   return 0;
}