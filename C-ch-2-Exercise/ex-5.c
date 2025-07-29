#include <stdio.h>
int main()
{
    int Shirt1 = 423;
    int Shirt2 = 320;
    int Shirt3 = 270;
    int Shirt4 = 680;
    int Shirt5 = 520;
    int price_after_discount, amount_of_discount_availed, total_price;
    total_price = Shirt1 + Shirt2 + Shirt3 + Shirt4 + Shirt5;
    printf("Total price : %d\n", total_price);
    price_after_discount = (total_price) * 0.85;
    printf("Total price after discount : %d \n", price_after_discount);
    amount_of_discount_availed = total_price - price_after_discount;
    printf("Amount of discount availed by lady : %d \n", amount_of_discount_availed);
    return 0;
}