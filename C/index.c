#include <stdio.h>

int main()
{
    int length, width, area;
    printf("please enter the length of rectangle :\t");
    scanf("%d", &length);
    printf("please enter the width of rectangle :\t");
    scanf("%d", &width);
    area = length * width;
    printf("area of rectangle is :\t %d\n", area);
    return 0;
}
