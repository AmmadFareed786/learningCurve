#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    if (n2 % n1 == 0)
    {
        printf("%d is a factor of %d\n", n1, n2);
    }
    else if (n2 % n1 != 0)
    {
        printf("%d is not a factor of %d\n", n1, n2);
    }

    return 0;
}