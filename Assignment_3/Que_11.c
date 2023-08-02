#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,marks;
    printf("Enter the marks:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    marks= (m1+m2+m3+m4+m5)*100/500;
    
     printf("Your score is: %d\n",marks);
    if(marks>=33)
    {
        printf("You have pasaed!");
    }
    else
    {
        printf("Faild!");
    } 

    return 0;
}