#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,k;
    int c[10][10],sum;

    printf("Enter the element of first matrix:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the element of second matrix:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A :\n"); 
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B :\n"); 
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            sum=0;
           for(k=0;k<3;k++)
           {
              sum=sum + a[i][k]*b[k][j];
           }
           c[i][j]=sum;
        }
    }
    printf("\nMultiplication  of Matrix A and B is :\n"); 
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;     
}