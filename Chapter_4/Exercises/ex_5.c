#include <stdio.h>

int main()
{
   int array[10];
   int num_of_orders = 1;
   for (int i = 0; i < 10; i++)
   {
      printf("%d. Enter a number : ", num_of_orders);
      scanf("%d", &array[i]);
      num_of_orders++;
   }
   int product = array[0] * array[9];
   printf("This is the product of first and last number %d\n",product);
   return 0;
}