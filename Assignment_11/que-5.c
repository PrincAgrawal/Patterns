#include<stdio.h>
void prime(int n)
{
    int i,j;
    for ( i = 1; i <= n; i++)
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
    prime(65);
    return 0;

}