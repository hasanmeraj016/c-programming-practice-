
#include <stdio.h>

int main()
{
    int x, y, sum;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    sum = x + y;

    printf("Sum of %d and %d is %d", x, y, sum);

    return 0;
}
