#include <stdio.h>

int main()
{
    int num1;

    printf("Enter a 5-digit number:\t");
    scanf("%d", &num1);

    if (num1 >= 10000 && num1 <= 99999)
    {
        int digit1, digit2, sum;
        digit1 = num1 % 10;
        printf("%d\n", digit1);
        digit2 = num1 / 10000;
        printf("%d\n", digit2);
        sum = digit1 + digit2;
        printf("%d\n", sum);
    }
    else if (num1 > 99999)
    {
        printf("Your number is greater than 5 digits\n");
        printf("Again enter a 5-digit number:\t");
        scanf("%d", &num1);
    }
    else if (num1 < 9999)
    {
        printf("Your number is less than 5 digits\n");
        printf("Again enter a 5-digit number:\t");
        scanf("%d", &num1);
    }
    else
    {
        printf("Your number is not entered due to some reason \n");
    }

    return 0;
}
// it is the alternative of ex-7.c file