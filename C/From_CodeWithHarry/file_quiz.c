#include <stdio.h>

int main()
{
   FILE *ptr;
   ptr = fopen("file1.txt", "r");
   int num;

   if (ptr == NULL)
   {
      printf("The file is not existing\n");
   }
   else
   {
      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fscanf(ptr, "%d", &num);
      printf("The value of num is %d \n", num);

      fclose(ptr);
   }

   return 0;
}