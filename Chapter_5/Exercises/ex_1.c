#include <stdio.h>

int SQUARE(int);

int main()
{
   int n;
   printf("Enter positive number : ");
   scanf("%d", &n);
   if (n > -1)
   {
      printf("Square of %d is %d\n", n, SQUARE(n));
   }
   else
   {
      printf("Please enter positive number!\n");
   }
   return 0;
}

int SQUARE(int x)
{
   return x * x;
}