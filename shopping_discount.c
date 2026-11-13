
#include <stdio.h>

int main()
{
    int amount, discount;
    float final;

    printf("Enter purchase amount: ");
    scanf("%d", &amount);

    if (amount >= 5000)
    {
        discount = amount * 20 / 100;
        final = amount - discount;
    }
    else if (amount >= 3000)
    {
        discount = amount * 10 / 100;
        final = amount - discount;
    }
    else
    {
        discount = 0;
        final = amount;
    }

    printf("Discount amount = Rs. %d\n", discount);
    printf("Final amount = Rs. %.2f", final);

    return 0;
}
