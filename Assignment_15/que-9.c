#include<stdio.h>
void merge(int a[], int b[], int size)
{
    int c[10],i,j,k=0;

    for(i=0,j=0;i<5,j<5;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
    }

    if(i==5 && j<5)
    {
        for(;j<5;j++)
          c[k++]=b[j];
    }
    if(j==5 && i<5)
    {
        for(;i<5;i++)
          c[k++]=a[i];
    }

    printf("Merged Array is:\n");
    for(k=0;k<10;k++)
    {
        printf("%d ",c[k]);
    }
}

int main()
{
   int a[5]={1,4,6,7,9};
   int b[5]={0,2,3,5,8};
   int c[10];
   merge(a,b,5);

   return 0;

}
