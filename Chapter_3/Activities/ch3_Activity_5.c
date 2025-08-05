#include <stdio.h>

int main()
{
    int n1, n2, choice;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    printf("Enter 1 for addition , 2 for subtraction , 3 for multiplication and 4 for division : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int addition = n1 + n2;
        printf("%d + %d = %d\n", n1, n2, addition);
    }
    else if (choice == 2)
    {
        int subtraction = n1 - n2;
        printf("%d - %d = %d\n", n1, n2, subtraction);
    }
    else if (choice == 3)
    {
        int multiplication = n1 * n2;
        printf("%d x %d = %d\n", n1, n2, multiplication);
    }
    else if (choice == 4)
    {
        if (n2 == 0 || n1 == 0)
        {
            printf("Error: please enter valid value\n");
        }
        else
        {
            double division = (double)n1 / n2;
            printf("%d / %d = %.1f\n", n1, n2, division);
        }
    }
    else
    {
        printf("No valid choice entered\n");
    }

    return 0;
}