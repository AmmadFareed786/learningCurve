#include <stdio.h>

void table();

int main()
{
   table();
   return 0;
}

void table()
{
   int n;
   printf("Enter number : ");
   scanf("%d", &n);
   printf("\n");
   for (int i = 0; i < 10; i++)
   {
      printf("%d x %d = %d \n", n, i + 1, n * (i + 1));
   }
}