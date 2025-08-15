#include <stdio.h>

void validTriangle();

int main()
{
   validTriangle();
   return 0;
}

void validTriangle()
{
   int angle1, angle2, angle3, sum;
   printf("Enter first angle of a triangle : ");
   scanf("%d", &angle1);
   printf("Enter second angle of a triangle : ");
   scanf("%d", &angle2);
   printf("Enter third angle of a triangle : ");
   scanf("%d", &angle3);
   sum = angle1 + angle2 + angle3;
   printf("Sum of angles are %d + %d + %d = %d \n", angle1, angle2, angle3, sum);
   if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
   {
      printf("Valid angles of a triangle\n");
   }
   else
   {
      printf("Invalid angles of a triangle\n");
   }
}