#include<stdio.h>
float area(int r)
{
    return 3.14 *r*r;
}
int main()
{
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Area of circle is: %f",area(r));
}
