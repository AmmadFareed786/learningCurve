#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter Celsius temprature : ");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5) * celsius + 32;
    // in this line i have biggest error that 9.0 != 9 in computer but in calculator 9.0 = 9
    printf("Fahrenheit: %.1f\n", fahrenheit);
    return 0;
}
/*it is a common problem that after decimal in data type float never correct calculation but in double it's correct
#include <stdio.h>
int main()
{
    double num_2 = 100000000.25;
    double num_1 = 100000000.38;
    double sum = num_1 + num_2;
    printf(" \n\nThe sum is : %.2lf \n\n", sum);
    return 0;
}*/