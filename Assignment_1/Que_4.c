#include<stdio.h>
int main()
{
    float radious,area;

    printf("enter the radious of the circle:");
    scanf("%f",&radious);

    area= 3.14*radious*radious;
    printf("Area of circle is %f having the radious %f",area,radious);
    return 0;
}