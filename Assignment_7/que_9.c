#include<stdio.h>
#include<math.h>
int main()
{
  int x,count=0,sum=0,y;
  printf("Enter a number:");
  scanf("%d",&x);
  int n=x;

  while(n!=0)
  {
    n=n/10;
    count++;
  }         
 //printf("%d\n",count);
  n=x;
  while(n!=0)
  {
    sum = sum + pow(n%10,count);
    n=n/10;
  }
  
  //printf("Sum is %d",sum);

  if(x==sum)
    printf("Given number is Armstrong!");
  else
    printf("Not a Armstrong number!");
  return 0;            

}