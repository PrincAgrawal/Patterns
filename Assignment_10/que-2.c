#include<stdio.h>
float simpleinterest(float p,float r,float t)
{
    return (p*r*t)/100;
}
int main()
{
   float p,r,t;
   printf("Enter the value of p,r and t:\n");
   scanf("%f%f%f",&p,&r,&t);
   printf("simple interest is: %f",simpleinterest(p,r,t));
   return 0;
}
