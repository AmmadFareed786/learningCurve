#include <stdio.h>

int main()
{
    float body_temprature;
    printf("Enter your body Temprature in F : ");
    scanf("%f", &body_temprature);
    if (body_temprature >= 98.6)
    {
        printf("You have fever \n");
    }
    else
    {
        printf("You don't have fever \n");
    }

    return 0;
}