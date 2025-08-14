#include <stdio.h>

int sum(int);

int main()
{
   int num;
   printf("Enter natural number ");
   scanf("%d", &num);
   if (num != 0)
   {
      printf("The sum of natural numbers are %d\n", sum(num));
   }
   else
   {
      printf("It is not a natural  number \n");
   }

   return 0;
}

int sum(int n)
{
   if (n == 1)
   {
      return 1;
   }

   return sum(n - 1) + n;
}