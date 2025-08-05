#include <stdio.h>

int main()
{
    int num1, digit1, digit2, sum;

    printf("Enter a 5-digit number:\t");
    scanf("%d", &num1);
    digit1 = num1 % 10;
    printf("%d\n", digit1);
    if (num1 >= 10000)
    {
        digit2 = num1 / 10000;
    }
    else if (num1 >= 1000)
    {
        digit2 = num1 / 1000;
    }
    else if (num1 >= 100)
    {
        digit2 = num1 / 100;
    }
    else if (num1 >= 10)
    {
        digit2 = num1 / 10;
    }
    else
    {
        digit2 = num1;
    }

    printf("%d\n", digit2);
    sum = digit1 + digit2;
    printf("%d\n", sum);

    return 0;
}
// i used many if else because i have no idea that user kon sa no. put kar de otherwise go to file alternative-of-ex-7.c
