#include<stdio.h>
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   float sum=0;
   float avg;
   for(int i=0;i<10;i++)
   {
      sum= sum+ a[i];
   } 
   avg = sum/10;

   printf("Average is = %.2f",avg);
   return 0;
}