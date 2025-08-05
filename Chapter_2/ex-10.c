#include <stdio.h>
int main()
{
    float radius;
    printf("Enter your circle radius : \t");
    scanf("%f", &radius);
    float area;
    area = 22.0 / 7 * radius * radius;
    printf("This is the area of circle :  \t%.1f\n", area);

    return 0;
}