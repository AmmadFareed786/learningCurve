#include <stdio.h>

int change_value(int *);

int main()
{
   int a = 5;
   int *ptr = &a;
   printf("The value of a is %d\n", change_value(&a));
   return 0;
}

int change_value(int *a)
{
   *a = *a * 10;
   return *a;
}