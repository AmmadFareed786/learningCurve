#include <stdio.h>
#include <math.h>

int main()
{
   int a, b;
   printf("Enter first positive number : ");
   scanf("%d", &a);
   printf("Enter second positive number : ");
   scanf("%d", &b);
   long long result = (long long)pow(a, b) ;
   printf("The result is %lld\n",result);
   return 0;
}