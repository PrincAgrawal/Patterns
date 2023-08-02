#include<stdio.h>
float area (int r)
{
  return 3.14*r*r; 
} 
int main()
{
    float r,n;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    n=area(r);
    printf("Area of circle is:%f",n);
    return 0;
}

