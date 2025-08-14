#include <stdio.h>
#include <string.h>

struct three_employees
{
   int salary;
   float height;
   char first_letter_of_name;
};

int main()
{
   struct three_employees e1, e2, e3;

   printf("Enter salary of first employee : ");
   scanf("%d", &e1.salary);
   printf("Enter height of first employee : ");
   scanf("%f", &e1.height);
   printf("Enter first letter of first employee name : ");
   scanf(" %c", &e1.first_letter_of_name);
   printf("\n");

   printf("Enter salary of second employee : ");
   scanf("%d", &e2.salary);
   printf("Enter height of second employee : ");
   scanf("%f", &e2.height);
   printf("Enter first letter of second employee name : ");
   scanf(" %c", &e2.first_letter_of_name);
   printf("\n");

   printf("Enter salary of third employee : ");
   scanf("%d", &e3.salary);
   printf("Enter height of third employee : ");
   scanf("%f", &e3.height);
   printf("Enter first letter of third employee name : ");
   scanf(" %c", &e3.first_letter_of_name);
   printf("\n");

   printf("The first employee details : \n\nSalary : %d \nHeight : %.1f \nFirst letter of your name : %c\n\n\n", e1.salary, e1.height, e1.first_letter_of_name);
   printf("The second employee details : \n\nSalary : %d \nHeight : %.1f \nFirst letter of your name : %c\n\n\n", e2.salary, e2.height, e2.first_letter_of_name);
   printf("The third employee details : \n\nSalary : %d \nHeight : %.1f \nFirst letter of your name : %c\n\n\n", e3.salary, e3.height, e3.first_letter_of_name);

   return 0;
}