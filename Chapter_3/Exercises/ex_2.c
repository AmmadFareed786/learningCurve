#include <stdio.h>

int main()
{
    int n1;
    printf("Enter a number : ");
    scanf("%d", &n1);
    if (n1 % 3 == 0 && n1 % 10 == 5)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}