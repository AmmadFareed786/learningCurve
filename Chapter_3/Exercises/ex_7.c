#include <stdio.h>

int main()
{
    int salary, experience, bonus_tasks, bonus;
    printf("Enter your salary : ");
    scanf("%d", &salary);
    printf("Enter your experience in years : ");
    scanf("%d", &experience);
    printf("Enter your bonus tasks : ");
    scanf("%d", &bonus_tasks);
    if (salary == 10000 && experience == 2 && bonus_tasks == 5)
    {
        bonus = 1500;
        printf("Your bonus is %d\n", bonus);
    }
    else if (salary == 10000 && experience == 3 && bonus_tasks == 10)
    {
        bonus = 2500;
        printf("Your bonus is %d\n", bonus);
    }
    else if (salary == 25000 && experience == 3 && bonus_tasks == 4)
    {
        bonus = 2000;
        printf("Your bonus is %d\n", bonus);
    }
    else if (salary == 75000 && experience == 4 && bonus_tasks == 7)
    {
        bonus = 3500;
        printf("Your bonus is %d\n", bonus);
    }
    else if (salary == 100000 && experience == 5 && bonus_tasks == 10)
    {
        bonus = 5000;
        printf("Your bonus is %d\n", bonus);
    }
    else
    {
        printf("Sorry! You do not match any of our official employee records.\n");
        printf("Either your salary, experience, or bonus task count is incorrect.\n");
        printf("Kindly check again — looks like you're not one of us... yet!\n");
    }

    return 0;
}