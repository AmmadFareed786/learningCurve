#include <stdio.h>

void digit_counter();

int main()
{
   digit_counter();
   return 0;
}

void digit_counter()
{
   long long n, digit, reverse = 0;
   printf("Enter number : ");
   scanf("%lld", &n);
   while (n > 0)
   {
      reverse = (reverse * 10) + (n % 10);
      n /= 10;
   }
   printf("\n");
   while (reverse > 0)
   {
      digit = (reverse % 10);
      printf("%lld ", digit);
      n /= 10;
      reverse /= 10;
   }
   printf("\n");
}