#include <stdio.h>

int main(void)
{
    double a, b, c;

    if (scanf("%lf, %lf, %lf", &a, &b, &c) == 3)
    {
        if (a <= 0.0 || b <= 0.0 || c <= 0.0)
        {
            printf("error\n");
            return 0;
        }
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
