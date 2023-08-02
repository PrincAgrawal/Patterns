#include<stdio.h>
void duplicate(int a[], int hash[], int size)
{
   int i,j,count=0;
   for(i=0;i<size;i++)
     hash[a[i]]++;
 
   for(i=0;i<size;i++)
   {
      if(hash[i]==2)
        count++;
   }

   printf("N0. of duplicate numbers is :%d \n",count);
}
int main()
{
    int a[10]={1,2,6,5,4,8,3,6,5,7};
    int hash[10]={0};
    duplicate(a,hash,10);

    return 0;
}