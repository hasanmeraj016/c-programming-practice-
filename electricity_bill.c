
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2.00;
    }
    else if (units <= 200)
    {
        bill = (100 * 2.00) + (units - 100) * 3.00;
    }
    else
    {
        bill = (100 * 2.00) + (100 * 3.00)
               + (units - 200) * 5.00;
    }

    printf("Total electricity bill = Rs. %.2f", bill);

    return 0;
}
