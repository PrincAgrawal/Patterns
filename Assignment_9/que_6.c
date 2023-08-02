#include<stdio.h>
int main()
{
  int marks;
  while(1)
{
  printf("Enter your marks:");
  scanf("%d",&marks);
  switch(marks)
  {
    case 90 ... 100:
       printf("\nGrade A\n");
       break;
    case 80 ... 89:
       printf("\nGrade B\n");
       break;
    case 70 ... 79:
       printf("\nGrade C\n");
       break;
    case 60 ... 69:
       printf("\nGrade D\n");
       break;
    case 50 ... 59:
       printf("\nGrade E\n");
       break;
    case 0 ... 49 :
       printf("\nGrade F\n");
       break;
     default: printf("Invaild Marks!\n");
  }
}
  return 0;
}