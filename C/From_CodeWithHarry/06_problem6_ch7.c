#include <stdio.h>

void positive_no(int arr[]);

int main()
{
   int arr[10];

   positive_no(arr);
   return 0;
}

void positive_no(int arr[])
{

   int counter = 0;
   for (int i = 0; i < 10; i++)
   {
      counter++;
      printf("Enter %d number : ", counter);
      scanf("%d", &arr[i]);
   }

   int count = 0;
   for (int i = 0; i < 10; i++)
   {
      if (arr[i] > 0)
      {
         count++;
      }
   }
   printf("The number of positive numbers are %d\n",count);
   return;
}