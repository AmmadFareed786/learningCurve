#include <stdio.h>
#include <math.h>

int power(int, int);

int main()
{
   int base, exponent;
   printf("Enter Base : ");
   scanf("%d", &base);
   printf("Enter Exponent : ");
   scanf("%d", &exponent);
   printf("%d raised to the power %d is %d\n", base, exponent, power(base, exponent));
   return 0;
}

int power(int x, int y)
{
   return pow(x, y);
}