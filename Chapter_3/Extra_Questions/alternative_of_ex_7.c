#include <stdio.h>

int main()
{
	int salary, experience, bonus_tasks;
	float bonus = 0;

	printf("==============================================\n");
	printf("  Salary    Experience   Bonus Tasks   Bonus  \n");
	printf("==============================================\n");
	printf("  10000        2 yrs           5         1500 \n");
	printf("  10000        3 yrs          10         2500 \n");
	printf("  25000        3 yrs           4         2000 \n");
	printf("  75000        4 yrs           7         3500 \n");
	printf(" 100000        5 yrs          10         5000 \n");
	printf("==============================================\n\n");

	printf("Enter your salary : ");
	scanf("%d", &salary);
	printf("Enter your experience in years : ");
	scanf("%d", &experience);
	printf("Enter your bonus tasks : ");
	scanf("%d", &bonus_tasks);

	int required_tasks = 0;
	int full_bonus = 0;

	if (salary == 10000 && experience >= 3)
	{
		required_tasks = 10;
		full_bonus = 2500;
	}
	else if (salary == 10000 && experience >= 2)
	{
		required_tasks = 5;
		full_bonus = 1500;
	}
	else if (salary == 25000 && experience >= 3)
	{
		required_tasks = 4;
		full_bonus = 2000;
	}
	else if (salary == 75000 && experience >= 4)
	{
		required_tasks = 7;
		full_bonus = 3500;
	}
	else if (salary == 100000 && experience >= 5)
	{
		required_tasks = 10;
		full_bonus = 5000;
	}

	if (required_tasks > 0)
	{
		bonus = ((float)bonus_tasks / required_tasks) * full_bonus;
		printf("\nYour bonus is %.0f\n", bonus);

		if (bonus_tasks > required_tasks)
		{
			printf("Wow! You did extra tasks. You earned more bonus!\n");
		}
	}
	else
	{
		printf("\nSorry! You do not match any of our official employee records.\n");
		printf("Either your salary, experience, or bonus task count is incorrect.\n");
		printf("Kindly check again — looks like you're not one of us... yet!\n");
	}

	return 0;
}
