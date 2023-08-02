#include<stdio.h>
int main()
{
    char ch;
     
     printf("Enter a character:\n");
     scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("It is an uppercase letter!");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("It is an lowercase letter!");
    }
    else if(ch>='0' && ch<='9')
        printf("digit");
    
    else if(ch>33 && ch<=47)
     printf("special character!");
    
    else{
        printf("Invaild character!");
    }

    return 0;
}