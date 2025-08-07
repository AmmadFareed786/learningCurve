#include <stdio.h>

int main()
{
   int num, i;

   for (num = 2; num <= 6; num++)
   {
      printf("\nTable of %d\n\n", num);
      for (i = 1; i <= 10; i++)
      {
         printf("%d x %d = %d\n", num, i, num * i);
      }
   }

   return 0;
}
