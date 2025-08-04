#include <stdio.h>

int main()
{
    int choice;
    printf("Enter 1 for triangle , 2 for parallelogram , 3 for rhombus and 4 for trapezium : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        double height_of_triangle, base_of_triangle;
        printf("Enter height of a triangle : ");
        scanf("%lf", &height_of_triangle);
        printf("Enter base of a triangle : ");
        scanf("%lf", &base_of_triangle);
        double area_of_triangle = (1.0 / 2) * height_of_triangle * base_of_triangle;
        printf("The area of triangle is %.1lf\n", area_of_triangle);
    }
    else if (choice == 2)
    {
        double height_of_paralellogram, base_of_paralellogram;
        printf("Enter height of a paralellogram : ");
        scanf("%lf", &height_of_paralellogram);
        printf("Enter base of a paralellogram : ");
        scanf("%lf", &base_of_paralellogram);
        double area_of_paralellogram = height_of_paralellogram * base_of_paralellogram;
        printf("The area of paralellogram is %.1lf\n", area_of_paralellogram);
    }
    else if (choice == 3)
    {
        double diagonal_1, diagonal_2;
        printf("Enter diagonal 1 of a rhombus : ");
        scanf("%lf", &diagonal_1);
        printf("Enter diagonal 2 of a rhombus : ");
        scanf("%lf", &diagonal_2);
        double area_of_rhombus = (1.0 / 2) * diagonal_1 * diagonal_2;
        printf("The area of rhombus is %.1lf\n", area_of_rhombus);
    }
    else if (choice == 4)
    {
        double base_1_of_trapezium, base_2_of_trapezium, height_of_trapezium;
        printf("Enter base 1 of a trapezium : ");
        scanf("%lf", &base_1_of_trapezium);
        printf("Enter base 2 of a trapezium : ");
        scanf("%lf", &base_2_of_trapezium);
        printf("Enter height of a trapezium : ");
        scanf("%lf", &height_of_trapezium);
        double area_of_trapezium = 0.5 * (base_1_of_trapezium + base_2_of_trapezium) * height_of_trapezium;
        printf("The area of trapezium is %.1lf\n", area_of_trapezium);
    }
    else
    {
        printf("No valid choice entered\n");
    }

    return 0;
}