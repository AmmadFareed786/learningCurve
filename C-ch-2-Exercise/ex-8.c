#include <stdio.h>
int main()
{
    int monthly_income, yearly_income, monthly_expenses, yearly_expenses, monthly_savings, yearly_savings, avg_savings_per_month, avg_expenses_per_month;
    printf("Enter your monthly expenses : \t");
    scanf("%d", &monthly_expenses);
    printf("Enter your monthly income : \t");
    scanf("%d", &monthly_income);
    yearly_expenses = monthly_expenses * 12;
    printf("This is your yearly expenses : \t%d\n", yearly_expenses);
    yearly_income = monthly_income * 12;
    printf("This is your yearly income : \t%d\n", yearly_income);
    monthly_savings = monthly_income - monthly_expenses;
    printf("This is your monthly savings : \t%d\n", monthly_savings);
    yearly_savings = yearly_income - yearly_expenses;
    printf("This is your yearly savings : \t%d\n", yearly_savings);
    avg_savings_per_month = yearly_savings / 12;
    printf("This is your Average savings per month : \t%d\n", avg_savings_per_month);
    avg_expenses_per_month = yearly_expenses / 12;
    printf("This is your Average expenses per month : \t%d\n", avg_expenses_per_month);
    return 0;
}