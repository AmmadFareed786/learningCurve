#include <stdio.h>

float toFahrenheit(float);

int main()
{
   float celsius = 37.0;
   printf("Temprature in Fahrenheit is %.1f\n",toFahrenheit(celsius));
   return 0;
}

float toFahrenheit(float celsius)
{
   return (9 / 5.0) * celsius + 32;
}