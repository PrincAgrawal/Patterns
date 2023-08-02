#include<stdio.h>
int main()
{
    int a,b,c,choice;
    while(1)
    {
      printf("1.isosceles triangle\n");
      printf("2.right angle triangle\n");
      printf("3.equilateral triangle\n");
      printf("4.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);

      switch(choice)
      {
         case 1:printf("Enter lengths of sides of triangle:\n");
                scanf("%d%d%d",&a,&b,&c);
               if(a+b>c || b+c>a || a+c>b)
               {
                 if(a==b ||b==c||a==c)
                       printf("this is isosceles triangle!\n");
                    else
                      printf("Not a isosceles triangle!\n");
               }
               else
                  printf("Not a vaild triangle!\n");
                  break;
         case 2:printf("Enter lengths of sides of triangle:\n");
                scanf("%d%d%d",&a,&b,&c);
               if(a+b>c || b+c>a || a+c>b)
                   {
                    if(a*a+b*b==c*c|| b*b+c*c==a*a || a*a+c*c==b*b)
                       printf("this is Right angle triangle!\n");
                    else
                      printf("Not a right angle triangle!\n");
                   }
                   else
                     printf("Not a vaild triangle!\n");
                break;
            case 3:printf("Enter lengths of sides of triangle:\n");
                   scanf("%d%d%d",&a,&b,&c);
                   if(a+b>c || b+c>a || a+c>b)
                   {
                    if(a==b && b==c && a==c)
                       printf("this is Equilatral triangle!\n");
                    else
                      printf("Not a Equilatral triangle!\n");
                   }
                   else
                     printf("Not a vaild triangle!\n");
              break;
            case 4:exit(0);
            default: printf("Enetr vaild choice!\n");
        }
    }

}