#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("Enter the element of array:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<10;i++)
    {
      if(min>a[i])
        min= a[i];
    }
    printf("Min no. in array is: %d",min);
    return 0;
}
