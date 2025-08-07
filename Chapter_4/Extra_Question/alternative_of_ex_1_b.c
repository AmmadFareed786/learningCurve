#include <stdio.h>

int main()
{
   // a.
   for (int i = 0; i < 3; i++)
   {
      printf("*****\n");
   }
   printf("\n");
   // b.
   char ch = 'A';
   for (int i = 1; i <= 5; i++)
   {
      for (int j = 1; j <= i; j++)
      { 
         printf("%c", ch);
         ch++;
      }
      printf("\n");
   }

   return 0;
}