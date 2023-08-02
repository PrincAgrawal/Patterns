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
    int max=a[0];
    for(i=1;i<10;i++)
    {
      if(max<a[i])
        max= a[i];
    }
    printf("Max no. in array is: %d",max);
    return 0;
}
