#include<stdio.h>
void prime(int a,int b)
{
    int i,j;
    for ( i = a; i <= b; i++)
    {
       for(j=2;j<i;j++)
       {
        if(i%j==0)
          break;
       }
       if(j==i)
         printf("%d ",j);
    }
    
}
int main()
{
    prime(2,34);
    return 0;

}