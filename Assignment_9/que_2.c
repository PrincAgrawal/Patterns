#include<stdio.h>
int main()
{
    int a,b,choice;
    float f;
    while(1)
    {
        printf("1.Addition\n");
        printf("2.Subraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice(1-4): ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter two number:\n");
                    scanf("%d%d",&a,&b);
                    printf("Addition is:%d\n\n",a+b);
                    break;
            case 2: printf("Enter two number:\n");
                    scanf("%d%d",&a,&b);
                    printf("Subtraction is:%d\n\n",a-b);
                    break;
            case 3: printf("Enter two number:\n");
                    scanf("%d%d",&a,&b);
                    printf("Multiplication is:%d\n\n",a*b);
                    break;
            case 4: printf("Enter two number:\n");
                    scanf("%d%d",&a,&b);
                    f= a/b;
                    printf("Division is:%f\n\n",f);
                    break;
            case 5: exit(0);
            default: printf("Enter a vaild choice !\n");
        }
    }

    return 0;
}