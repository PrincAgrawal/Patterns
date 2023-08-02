#include<stdio.h>
void findFreq(int a[],int size)
{
    int hash[100]={0};
    int i;
    for(i=0;i<size;i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<size;i++)
    {
        if(hash[i]!=0)
         printf("%d->%d\n",i,hash[i]);
    }
}                                                                      
int main()
{
    int a[10]={1,2,3,9,5,3,4,10,3,5};
    findFreq(a,10);
    return 0;
}