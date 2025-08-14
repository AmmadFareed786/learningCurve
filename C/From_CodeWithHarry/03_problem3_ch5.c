#include <stdio.h>

int myFunction(int);

int main()
{
   float g = 9.8;
   int mass;
   printf("mass = %d\n\n",mass);
   printf("g = %.1f\n\n",g);
   printf("force = %d\n", myFunction(mass));
   return 0;
}

int myFunction(int Force)
{
   return Force * 9.8;
}