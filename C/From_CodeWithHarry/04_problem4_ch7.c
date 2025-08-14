#include <stdio.h>

int main(){
   int num;
   printf("Enter number : ");
   scanf("%d", &num);
   int mul_of_5[10] = {};
   for (int i = 0; i < 10; i++)
   {
      mul_of_5[i] = num * (i + 1);
      printf("%d x %d = %d \n",num ,i+1, mul_of_5[i]);
   }

   return 0;
}