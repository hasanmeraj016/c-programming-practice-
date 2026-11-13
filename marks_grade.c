
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float p;

    printf("Enter marks in 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;

    p = total / 5.0;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", p);

    if (p > 100 || p < 0)
    {
        printf("Invalid Marks");
    }
    else
    {
        if (p >= 90)
            printf("Grade = A+");
        else if (p >= 80)
            printf("Grade = A");
        else if (p >= 70)
            printf("Grade = B");
        else if (p >= 60)
            printf("Grade = C");
        else if (p >= 50)
            printf("Grade = D");
        else
            printf("Grade = F");
    }

    return 0;
}
