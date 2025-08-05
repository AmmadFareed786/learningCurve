#include <stdio.h>

int main()
{
    int original_price, sale_price;
    printf("Enter original price of a product : ");
    scanf("%d", &original_price);
    printf("Enter sale price of a product : ");
    scanf("%d", &sale_price);
    if (sale_price > original_price)
    {
        printf("Profit\n");
        double profit = sale_price - original_price;
        printf("You get %.1lf profit\n", profit);
        double profit_avg = (profit / original_price) * 100;
        printf("The percentage of profit is %.1lf\n", profit_avg);
    }
    else if (sale_price < original_price)
    {
        printf("Loss\n");
        double loss = original_price - sale_price;
        printf("You have %.1lf loss\n", loss);
        double loss_avg = (loss / original_price) * 100;
        printf("The percentage of loss is %.1lf \n", loss_avg);
    }
    else
    {
        printf("No loss , profit\n");
    }

    return 0;
}