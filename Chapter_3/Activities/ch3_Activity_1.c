#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age > 12 && age < 20)
    {
        printf("Teenager\n");
    }

    return 0;
}