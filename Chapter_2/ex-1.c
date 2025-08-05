#include <stdio.h>
int main()
{
    int rate_per_hour = 1000, basic_salary, working_hours_of_employee, overtime_pay_rate = 1000, overtime_salary, overtime_hours_of_employee, total_salary;
    printf("Enter your working hours : \t");
    scanf("%d", &working_hours_of_employee);
    printf("Enter your overtime working hours : \t");
    scanf("%d", &overtime_hours_of_employee);
    basic_salary = rate_per_hour * working_hours_of_employee;
    printf("This is your basic salary : \t%d\n", basic_salary);
    overtime_salary = overtime_pay_rate * overtime_hours_of_employee;
    printf("This is your overtime salary : \t%d\n", overtime_salary);
    total_salary = basic_salary + overtime_salary;
    printf("This is your total salary : \t%d\n", total_salary);
    return 0;
}