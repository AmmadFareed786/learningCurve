// What is it's output
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// it's output is 
// 6 6 4
// if your compiler order is rtl output is 6 6 4 otherwise 4 5 5 
#include <stdio.h>

int main()
{
   int a = 4;
   printf("%d %d %d \n", a, ++a, a++);
   return 0;
}
// but it's output is
// 4 5 5