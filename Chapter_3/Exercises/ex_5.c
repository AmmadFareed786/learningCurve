#include <stdio.h>

int main()
{
    int first_side, second_side, third_side;
    printf("Enter first size of a triangle : ");
    scanf("%d", &first_side);
    printf("Enter second size of a triangle : ");
    scanf("%d", &second_side);
    printf("Enter third size of a triangle : ");
    scanf("%d", &third_side);
    if (first_side >= second_side && first_side >= third_side)
    {
        if (first_side * first_side == second_side * second_side + third_side * third_side)
        {
            printf("It's a right angle triangle\n");
        }
        else
        {
            printf("It is not a right angled triangle\n");
        }
    }
    else if (second_side >= first_side && second_side >= third_side)
    {
        if (second_side * second_side == first_side * first_side + third_side * third_side)
        {
            printf("It's a right angle triangle\n");
        }
        else
        {
            printf("It is not a right angled triangle\n");
        }
    }
    else if (third_side >= second_side && third_side >= first_side)
    {
        if (third_side * third_side == second_side * second_side + first_side * first_side)
        {
            printf("It's a right angle triangle\n");
        }
        else
        {
            printf("It is not a right angled triangle\n");
        }
    }

    return 0;
}