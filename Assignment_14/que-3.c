#include<stdio.h>
int main()
{
    int a[10];
    int even=0, odd=0;
    printf("Enter the element of array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
          even= even+a[i];
        else if(a[i]%2==1)
          odd = odd+a[i];
    }

    printf("Sum of all even numbers in array is : %d\n",even);
    printf("Sum of all odd numbers in array is : %d\n",odd);

  return 0;
}