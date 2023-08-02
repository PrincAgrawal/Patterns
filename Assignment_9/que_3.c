#include<stdio.h>
int main()
{
    int day;
    printf("Enter day number of week:\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("Monday!");
                break;
        case 2: printf("Tuesday!");
                break;
        case 3: printf("wednesday!");
                break;
        case 4: printf("Thuresday!");
                break;
        case 5: printf("Friday!");
                break;
        case 6: printf("Saturday!");
                break;
        case 7: printf("Sunday!");
                break;
        default:printf("Enter vaild choice!");
    }
    return 0;
}