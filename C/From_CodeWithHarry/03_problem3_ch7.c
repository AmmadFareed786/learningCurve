#include <stdio.h>

int main()
{
   int mul_of_5[10] = {};
   for (int i = 0; i < 10; i++)
   {
      mul_of_5[i] = 5 * (i + 1);
      printf("5 x %d = %d \n" ,i+1, mul_of_5[i]);
   }

   return 0;
}