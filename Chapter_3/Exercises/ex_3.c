#include <stdio.h>

int main()
{
    int total_bill, discount_amount, discounted_price;
    char per = '%';
    printf("Enter your total bill : ");
    scanf("%d", &total_bill);
    if (total_bill <= 1000)
    {
        int discount = 10;
        printf("You get 10 %c percent disscount\n", per);
        discount_amount = (discount / 100.0) * total_bill;
        printf("You get %d Rs discount\n", discount_amount);
        discounted_price = total_bill - discount_amount;
        printf("You pay %d Rs after discount\n", discounted_price);
    }
    else if (total_bill <= 2500)
    {
        int discount = 20;
        printf("You get 20 %c percent disscount\n", per);
        discount_amount = (discount / 100.0) * total_bill;
        printf("You get %d Rs discount\n", discount_amount);
        discounted_price = total_bill - discount_amount;
        printf("You pay %d Rs after discount\n", discounted_price);
    }
    else if (total_bill <= 5000)
    {
        int discount = 35;
        printf("You get 35 %c percent disscount\n", per);
        discount_amount = (discount / 100.0) * total_bill;
        printf("You get %d Rs discount\n", discount_amount);
        discounted_price = total_bill - discount_amount;
        printf("You pay %d Rs after discount\n", discounted_price);
    }
    else if (total_bill <= 10000)
    {
        int discount = 50;
        printf("You get 50 %c percent disscount\n", per);
        discount_amount = (discount / 100.0) * total_bill;
        printf("You get %d Rs discount\n", discount_amount);
        discounted_price = total_bill - discount_amount;
        printf("You pay %d Rs after discount\n", discounted_price);
    }

    return 0;
}