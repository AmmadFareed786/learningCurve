#include <stdio.h>

float INTEREST_AMOUNT(int, int);

int main()
{
   int amount;
   float interest_per, interest_amount;
   printf("Enter the total amount : ");
   scanf("%d", &amount);
   printf("Enter the interest percentge : ");
   scanf("%f", &interest_per);
   interest_amount = (double)INTEREST_AMOUNT(amount, interest_per);
   printf("Interest amount is %.1lf\n", interest_amount);
   return 0;
}

float INTEREST_AMOUNT(int x, int y)
{
   return (x * y) / 100.0;
}