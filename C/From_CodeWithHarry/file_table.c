#include <stdio.h>

int main()
{
   int num;
   printf("\n");
   printf(" Enter number : ");
   scanf("%d", &num);
   FILE *fptr;
   fptr = fopen("table.txt", "w");
   if (fptr == NULL)
   {
      printf("file could not open\n");
      return 1;
   }
   else
   {
      printf(" File is successfully opened !\n");
      fprintf(fptr, "\n");
      fprintf(fptr, " Multiplication Table of %d", num);
      fprintf(fptr, "%c", '\n');
      fprintf(fptr, "---------------------------\n");
      fprintf(fptr, "---------------------------");
      fprintf(fptr, "%c", '\n');
      int count = 0;
      for (int i = 0; i < 10; i++)
      {
         count++;
         fprintf(fptr, "        %d x %d = %d        ", num, count, num * (i + 1));
         fprintf(fptr, "%c", '\n');
      }
      fprintf(fptr, "---------------------------\n");
      fprintf(fptr, "---------------------------");
      fclose(fptr);
      fptr = fopen("table.txt", "r");
      int ch;
      while ((ch = fgetc(fptr)) != EOF)
      {
         putchar(ch);
      }
      printf("\n");
      fclose(fptr);
   }

   return 0;
}