#include<stdio.h>
int main()
{
  int year;
  printf("Enter the year:\n");
  scanf("%d",&year);
  if(year%100==0)
  {
    if(year%400==0)
       printf("leap year!");
    else
       printf("non leap year!");
  }
  else 
  {
     if(year%4==0)
         printf("leap year!");
     else
         printf("non leap year!");
  }
  return 0;
}