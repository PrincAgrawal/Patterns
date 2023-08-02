#include<stdio.h>
int main()
{
  int x,y,i,HCF;
  printf("Enter two number:\n");
  scanf("%d %d",&x,&y);
  for(i=1;i<=x*y;i++)
  {
    if(i%x==0 && i%y==0)
       break;
  }
  printf("LCM is: %d\n",i);

  HCF= (x*y)/i;
  printf("HCF is:%d\n",HCF);

 if(HCF==1)
 {
    printf("Co prime numbers!");
 }
 else
 {
    printf("Not co prime numbers!");
 }
  return 0;
}