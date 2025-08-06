#include <stdio.h>

int main()
{
   int num = 2;
   int i;
   for ( i = 1; i <= 10; i++)
   {
      int table = num * i;
      printf("%d x %d = %d\n", num, i, table);
   }

   return 0;
}