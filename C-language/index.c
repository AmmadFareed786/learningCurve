#include <stdio.h>

void main()
{
    int length, width, area;
    length = 70;
    width = 110;
    printf("please enter the length of rectangle :\t %d \n", length);
    // scanf("%f", &length);
    printf("please enter the width of rectangle :\t %d \n", width);
    // scanf("%f", &width);
    area = length * width;
    printf("area of rectangle is :\t %d", area);
    // i don't know how to get data from user so that's why i comment scanf 's and initialize length width
}