#include <stdio.h>
int main()
{
    int num_1 = 40;
    int num_2 = 30;
    printf("I declared num1 :\t %d \n", num_1);
    printf("I declared num2 :\t %d \n\n", num_2);
    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2;
    num_1 = num_1 - num_2;
    printf("I swaped num1 :\t\t %d \n", num_1);
    printf("I swaped num2 :\t\t %d \n", num_2);
    return 0;
}