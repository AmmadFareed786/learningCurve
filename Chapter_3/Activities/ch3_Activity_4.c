#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter your percentage : ");
    scanf("%f", &percentage);
    if (percentage >= 80)
    {
        printf("You are eligible for BSSE, BSCS, and BSIT programs.\n");
    }
    else if (percentage >= 70)
    {
        printf("You are eligible for BSCS and BSIT programs.\n");
    }
    else if (percentage >= 60)
    {
        printf("You are eligible for BSIT program only.\n");
    }
    else
    {
        printf("Sorry, you are not eligible for any program.\n");
    }

    return 0;
}