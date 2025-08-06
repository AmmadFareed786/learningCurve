#include <stdio.h>

int main()
{
   int num1 = 2;
   int j; 
   printf("\n\n");
   printf("Table 2\n\n\n");
   for (j = 1; j <= 10; j++)
   {
      int table2 = num1 * j;
      printf("%d x %d = %d\n", num1, j, table2);
   }
   printf("\n\n");
   printf("Table 3\n\n\n");
   int num2 = 3;
   int i;
   for (i = 1; i <= 10; i++)
   {
      int table3 = num2 * i;
      printf("%d x %d = %d\n", num2, i, table3);
   }
   printf("\n\n");
   printf("Table 4\n\n\n");
   int num3 = 4;
   int k;
   for (k = 1; k <= 10; k++)
   {
      int table4 = num3 * k;
      printf("%d x %d = %d\n", num3, k, table4);
   }
   printf("\n\n");
   printf("Table 5\n\n\n");
   int num4 = 5;
   int l;
   for (l = 1; l <= 10; l++)
   {
      int table5 = num4 * l;
      printf("%d x %d = %d\n", num4, l, table5);
   }
   printf("\n\n");
   printf("Table 6\n\n\n");
   int num5 = 6;
   int m;
   for (m = 1; m <= 10; m++)
   {
      int table6 = num5 * m;
      printf("%d x %d = %d\n", num5, m, table6);
   }
   return 0;
}