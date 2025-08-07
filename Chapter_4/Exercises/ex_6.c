#include <stdio.h>

int main()
{
   int count = 0;
   int array[7] = {34, 90, 90, 90, 80, 89, 90};
   for (int i = 0; i <= 6; i++)
   {
      if (array[i] > 10)
      {
         count++;
      }
   }

   printf("%d elements are greater than 10\n", count);

   return 0;
}