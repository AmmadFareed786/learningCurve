#include <stdio.h>

int main()
{
   int marks, total = 0;
   for (int i = 1; i <= 30; i++)
   {
      printf("Enter marks for student %d : ", i);
      scanf("%d", &marks);
      total += marks;
   }
   float average = total / 30.0;
   printf("Average marks of the class is %.2f\n", average);

   return 0;
}