#include <stdio.h>

int main()
{
   for (int i = 1; i <= 7; i++)
   {
      int fact = 1;
      for (int j = 1; j <= i; j++)
      {
         fact *= j;
      }
      printf("%d! = %d\n", i, fact);
   }

   return 0;
}